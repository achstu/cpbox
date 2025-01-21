set -e

if [ "$#" -ne 2 ]; then
  echo "usage $0: prog1 prog2"
  exit 1
fi

TEST="input.txt"
GEN="python3 gen.py"

for ((i=0;i>=0;i++)); do
  echo $i | $GEN > $TEST
  diff <($1 < $TEST) <($2 < $TEST) || break
  echo -ne "\r\e[K$i OK"
done

echo -e "\r\e[KWA"
echo "check: $TEST"

#!bin/sh
make all
echo ---------------
./do-op
echo expected:
echo ---------------
./do-op 4
echo expected:
echo ---------------
./do-op 4 +
echo expected:
echo ---------------
./do-op 4 + 3 -
echo expected:
echo ---------------
./do-op 4 + 3
echo expected:
echo 7
echo ---------------
./do-op b4 + b3
echo expected:
echo 0
echo ---------------
./do-op 4b2 - 3b2
echo expected:
echo 1
echo ---------------
./do-op 4 + -+++--+-+-3
echo expected:
echo 1
echo ---------------
./do-op 0 - 2147483648
echo expected:
echo -2147483648
echo ---------------
./do-op 5 "*" +--15p4
echo expected:
echo 75
echo ---------------
./do-op 6 \* -100
echo expected:
echo -600
echo ---------------
./do-op 0 / 3
echo expected:
echo 0
echo ---------------
./do-op 4 / -3
echo expected:
echo -1
echo ---------------
./do-op 5 % 3
echo expected:
echo 2
echo ---------------
./do-op 3 / 0
echo expected:
echo Stop : division by zero
echo ---------------
./do-op 0 / 0
echo expected:
echo Stop : division by zero
echo ---------------
./do-op 3 % 0
echo expected:
echo Stop : modulo by zero
echo ---------------
./do-op 0 % 0
echo expected:
echo Stop : modulo by zero

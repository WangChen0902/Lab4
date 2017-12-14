第四次上机：
实验四：DNA排序问题
问题描述：
对于给定的全序集中排序元素序列{ a1, a2,... , an}，元素ai 的逆序数定义为
inv(ai)=|{ak|ai>ak,i<k<=n}|。序列A 的逆序数定义为inv(A)=inv(a1)+inv(a2)+.....+inv(an)事实上，序列A 的逆序数刻画出序列A中元素已排序的程度。逆序数越小，序列A 已排序的程度就越高。当序列A 已排好序时，其逆序数为0。
生物信息学家在进行分子计算研究DNA序列时需要将若干长度相同的DNA串按其逆序
数从小到大排序。例如，给定6个长度为10的DNA串：AACATGAAGG，TTTTGGCCAA，
TTTGGCCAAA ，GATCAGATTT ，CCCGGGGGGA ，ATCGATGCAT ，按其逆序数从
小到大排序为：CCCGGGGGGA，AACATGAAGG，GATCAGATTT，ATCGATGCAT，
TTTTGGCCAA，TTTGGCCAAA。
DNA 排序问题就是要对给定的长度相同的DNA 串按逆序数排序。
实验任务：
对于给定的长度相同的DNA 串，按其逆序数从小到大排序。
数据输入：
由文件input.txt给出输入数据。输入数据包含若干数据块。每个数据块的第1 行有2个正整数L和n，分别表示数据块中DNA串的长度和个数。接下来的n行中，每行是一个由大写英文字母A，C，G，T组成的长度为L的DNA串。文件最后以2 个0 结束。
结果输出:
将各数据块中的DNA串按逆序数排序输出到文件output.txt。每个数据块之间用一个空行分隔。
输入文件示例
Input.txt
10 6
AACATGAAGG
TTTTGGCCAA
TTTGGCCAAA
GATCAGATTT
CCCGGGGGGA
ATCGATGCAT
0 0
输出文件示例
Output.txt
CCCGGGGGGA
AACATGAAGG
GATCAGATTT
ATCGATGCAT
TTTTGGCCAA
TTTGGCCAAA
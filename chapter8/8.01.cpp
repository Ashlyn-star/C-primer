��д����������һ��istream& ����������ֵ����Ҳ��istream& ���˺�����Ӹ������ж�ȡ���ݣ�ֱ�������ļ�������ʶʱֹͣ��
������ȡ�����ݴ�ӡ�ڱ�׼����ϡ������Щ�������ڷ�����֮ǰ���������и�λ��ʹ�䴦����Ч״̬��

istream& read(istream& is) {
	std::string s;
	while (is >> s)
		std::cout << s << std::endl;
	is.clear();
	return is;
}
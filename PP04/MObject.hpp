
class MObject
{
public:
	MObject(){ posX = 50; posY = 8; }
	virtual ~MObject(){}

	int posX;
	int posY;

	virtual void Start(){}
	virtual void Update() {}
	virtual void Render(){}

private:

};

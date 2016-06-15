class Page {
public:
	Page() {
		page_text = "Lorem ipsum dolor sit amet, consectetur adipiscing elit. Praesent gravida consectetur metus. Praesent porta ac odio nec dictum. Aenean id interdum eros. Sed porta, justo at fermentum convallis, orci est interdum magna, sed interdum magna odio eu velit. Vivamus at posuere lorem. Maecenas consectetur nisi quis ligula finibus vulputate. Ut dapibus ex vel nunc sollicitudin bibendum a in velit. Fusce semper tristique purus, ut viverra arcu tempor porta. Ut a tincidunt dolor, sed varius libero. Aliquam elementum eu lectus eget efficitur. Vestibulum ornare varius nisl, sit amet pretium leo euismod quis. Vestibulum ante ipsum primis in faucibus orci luctus et ultrices posuere cubilia Curae; Nunc facilisis ac nibh nec dignissim. Maecenas eget elementum purus, sed condimentum elit. Nunc eu nisl est. Suspendisse tincidunt lacinia nulla, dapibus volutpat lacus faucibus in.";
	}

	string get_text() {
		return page_text; 
	}

private:
	string page_text; 
};
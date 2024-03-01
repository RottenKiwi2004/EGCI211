# Stack

<img src="https://www.boardinfinity.com/blog/content/images/2022/10/Untitled-design.jpg">

This is one example of stack. You can only access the top element. Every time you insert or remove, only top element is accessible.


### They are the same picture
<style>
	.stackBox {
		display: table;
		justify-content: center;
		flex-direction: 
	}
	#pegs {
		display: flex;
		align-items: flex-end;
		justify-content: space-evenly;
	}
</style>

<div id="pegs">
	<div class="stackBox"><pre class="mermaid"><code>graph TD

		subgraph LL0
			0x04[4]
			0x03[3]-->0x04
			0x02[2]-->0x03
			0x01[1]-->0x02
			0x00[0]-->0x01
		end
		0x04-->NULL0[NULL]
		HEAD0[HEAD]-->0x00
</code></pre></div>
<div class="stackBox"><pre class="mermaid"><code>graph TD

		HEAD-->NULL
</code></pre></div>
<div class="stackBox"><pre class="mermaid"><code>graph TD

		HEAD-->NULL
</code></pre></div>
</div>


## Implementation based on Linked List

### Node class
```cpp
class Node {
public:
	int value;
	Node * next = NULL;

	Node(int value) {this->value = value;}
};
```

### Stack class
```cpp
class Stack {
private:
	Node * top = NULL;

public:
	void pop();
	void push(int);
	bool empty();
	int getTop();
	void print();
};
```

### Push method example
```cpp
void Stack::push(int n) {
	Node * newNode = new Node(n);

	if(this->top == NULL){
		this->top = newNode;
		return;
	}
	newNode->next = this->top;
	this->top = newNode;
}
```

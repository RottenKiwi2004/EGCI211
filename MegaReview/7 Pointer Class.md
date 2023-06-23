# `Subject * subj;`

```cpp
Subject advProg("Advanced Programming");
subj = &advProg;
subj->isHard = false;
subj->printDetail();
```

When class is a pointer, not normal variable, instead of accessing members of that class by `.` (dot operator), we have use `->` (arrow operator)

From the code above, `subj` is a pointer, but `advProg` is a normal variable.

### Valid ✅

```cpp
// Normal . operator
advProg.isHard = true;
advProg.printDetail();

// Arrow operator
subj->isHard = false;
subj->printDetail();

// Getting the class first, then use . operator
(*subj).isHard = true;
(*subj).printDetail();
```

### Invalid ❌

```cpp
// Arrow is not valid for normal variable
advProg->isHard = true;
advProg->printDetail();

// Dot is not valid for pointer
subj.isHard = false;
subj.printDetail();

// Dot operator has higher priority than *
*subj.isHard = true;
*subj.printDetail();
```

As we can see, `var->member` is the same as `(*var).member` because we just change the class pointer to normal class before accessing the member

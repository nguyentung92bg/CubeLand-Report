/* IL2CPP: Rotatelab.UI.UIInputBlocker$$.ctor
void Rotatelab_UI_UIInputBlocker___ctor (Rotatelab_UI_UIInputBlocker_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.UI.UIInputBlocker$$.ctor
   void Rotatelab_UI_UIInputBlocker___ctor (Rotatelab_UI_UIInputBlocker_o* __this, const MethodInfo*
   method); */

int Rotatelab_UI_UIInputBlocker___ctor_1124508(int param_1)

{
  undefined4 uVar1;
  char *pcVar2;
  
  pcVar2 = (char *)(_UNK_011345a4 + 0x113451c);
  if (*pcVar2 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_011345a8 + 0x1134530));
    FUN_00ec37c0(*(undefined4 *)(_UNK_011345ac + 0x113453c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_011345b0 + 0x1134548));
    *pcVar2 = '\x01';
  }
  uVar1 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_011345b4 + 0x113455c));
  System_Collections_Generic_List_object____ctor_267d2e8
            (uVar1,2,**(undefined4 **)(_UNK_011345b8 + 0x1134574));
  *(undefined4 *)(param_1 + 0x10) = uVar1;
  thunk_FUN_00ec5080((undefined4 *)(param_1 + 0x10),uVar1);
  pcVar2 = (char *)(_UNK_0360da14 + 0x360d9cc);
  if (*pcVar2 == '\0') {
    thunk_FUN_00ec37c0(*(undefined4 *)(_UNK_0360da18 + 0x360d9e0),0);
    *pcVar2 = '\x01';
  }
  if (*(int *)(**(int **)(_UNK_0360da1c + 0x360d9f4) + 0x74) == 0) {
    thunk_FUN_00ec3934();
  }
  return param_1;
}


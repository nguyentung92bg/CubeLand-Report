/* IL2CPP: Rotatelab.UI.GenericDialog$$.ctor
void Rotatelab_UI_GenericDialog___ctor (Rotatelab_UI_GenericDialog_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.UI.GenericDialog$$.ctor
   void Rotatelab_UI_GenericDialog___ctor (Rotatelab_UI_GenericDialog_o* __this, const MethodInfo*
   method); */

int Rotatelab_UI_GenericDialog___ctor_11126b4(int param_1)

{
  undefined4 uVar1;
  undefined4 extraout_r2;
  undefined4 extraout_r3;
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  char *pcVar2;
  undefined4 unaff_r11;
  undefined4 unaff_lr;
  
  pcVar2 = (char *)(_UNK_0112274c + 0x11226c8);
  if (*pcVar2 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01122750 + 0x11226dc));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01122754 + 0x11226e8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01122758 + 0x11226f4));
    *pcVar2 = '\x01';
  }
  uVar1 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_0112275c + 0x1122708));
  System_Collections_Generic_List_object____ctor_267d274
            (uVar1,**(undefined4 **)(_UNK_01122760 + 0x112271c));
  *(undefined4 *)(param_1 + 0x2c) = uVar1;
  thunk_FUN_00ec5080((undefined4 *)(param_1 + 0x2c),uVar1);
  pcVar2 = (char *)(_UNK_0360da14 + 0x360d9cc);
  if (*pcVar2 == '\0') {
    thunk_FUN_00ec37c0(*(undefined4 *)(_UNK_0360da18 + 0x360d9e0),0,extraout_r2,extraout_r3,unaff_r4
                       ,unaff_r5,unaff_r11,unaff_lr);
    *pcVar2 = '\x01';
  }
  if (*(int *)(**(int **)(_UNK_0360da1c + 0x360d9f4) + 0x74) == 0) {
    thunk_FUN_00ec3934();
  }
  return param_1;
}


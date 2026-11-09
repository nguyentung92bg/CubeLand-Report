/* IL2CPP: Rotatelab.UI.GenericDialog.<>c__DisplayClass21_0$$<Show>b__0
bool Rotatelab_UI_GenericDialog___c__DisplayClass21_0___Show_b__0 (Rotatelab_UI_GenericDialog___c__DisplayClass21_0_o* __this, Rotatelab_UI_GenericDialog_DialogData_o* e, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Rotatelab.UI.GenericDialog.<>c__DisplayClass21_0$$<Show>b__0
   bool Rotatelab_UI_GenericDialog___c__DisplayClass21_0___Show_b__0
   (Rotatelab_UI_GenericDialog___c__DisplayClass21_0_o* __this,
   Rotatelab_UI_GenericDialog_DialogData_o* e, const MethodInfo* method); */

undefined1
Rotatelab_UI_GenericDialog___c__DisplayClass21_0___Show_b__0_1112c84(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar3 = *(int *)(param_1 + 8);
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar1 = System_String__op_Inequality_2a09760
                    (*(undefined4 *)(param_2 + 8),*(undefined4 *)(iVar3 + 8),0);
  if (iVar1 == 0) {
    iVar1 = System_String__op_Inequality_2a09760
                      (*(undefined4 *)(param_2 + 0xc),*(undefined4 *)(iVar3 + 0xc),0);
    if (iVar1 == 0) {
      if (*(int *)(param_2 + 0x14) == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      if (*(int *)(iVar3 + 0x14) == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      if (*(int *)(*(int *)(param_2 + 0x14) + 0xc) == *(int *)(*(int *)(iVar3 + 0x14) + 0xc)) {
        iVar1 = 4;
        do {
          if (*(int *)(param_2 + 0x14) == 0) {
                    /* WARNING: Subroutine does not return */
            thunk_FUN_00f078d4();
          }
          uVar2 = iVar1 - 4;
          if (*(int *)(*(int *)(param_2 + 0x14) + 0xc) <= (int)uVar2) {
            return 1;
          }
          iVar4 = *(int *)(param_2 + 0x14);
          if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
            thunk_FUN_00f078d4();
          }
          if (*(uint *)(iVar4 + 0xc) <= uVar2) {
                    /* WARNING: Subroutine does not return */
            thunk_FUN_00f07924();
          }
          iVar4 = *(int *)(iVar4 + iVar1 * 4);
          if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
            thunk_FUN_00f078d4();
          }
          iVar5 = *(int *)(iVar3 + 0x14);
          if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
            thunk_FUN_00f078d4();
          }
          if (*(uint *)(iVar5 + 0xc) <= uVar2) {
                    /* WARNING: Subroutine does not return */
            thunk_FUN_00f07924();
          }
          iVar5 = *(int *)(iVar5 + iVar1 * 4);
          if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
            thunk_FUN_00f078d4();
          }
          iVar4 = System_String__op_Inequality_2a09760
                            (*(undefined4 *)(iVar4 + 8),*(undefined4 *)(iVar5 + 8),0);
          iVar1 = iVar1 + 1;
        } while (iVar4 == 0);
      }
    }
  }
  return 0;
}


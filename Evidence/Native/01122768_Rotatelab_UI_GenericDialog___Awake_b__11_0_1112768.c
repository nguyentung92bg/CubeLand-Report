/* IL2CPP: Rotatelab.UI.GenericDialog$$<Awake>b__11_0
void Rotatelab_UI_GenericDialog___Awake_b__11_0 (Rotatelab_UI_GenericDialog_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Rotatelab.UI.GenericDialog$$<Awake>b__11_0
   void Rotatelab_UI_GenericDialog___Awake_b__11_0 (Rotatelab_UI_GenericDialog_o* __this, const
   MethodInfo* method); */

void Rotatelab_UI_GenericDialog___Awake_b__11_0_1112768(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar1 = *(int *)(*(int *)(param_1 + 0x28) + 0x14);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (*(int *)(iVar1 + 0xc) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f07924();
  }
  if (*(int *)(iVar1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar1 = *(int *)(*(int *)(iVar1 + 0x10) + 0xc);
  Rotatelab_UI_GenericDialog__Hide_1111038(param_1);
  if (iVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x01121030. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(iVar1 + 0xc))(*(undefined4 *)(iVar1 + 0x20),*(undefined4 *)(iVar1 + 0x14));
    return;
  }
  return;
}


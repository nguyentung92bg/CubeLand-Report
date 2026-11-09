/* IL2CPP: Rotatelab.UI.GenericDialog$$EnsureAtLeastOneDialogButton
void Rotatelab_UI_GenericDialog__EnsureAtLeastOneDialogButton (Rotatelab_UI_GenericDialog_o* __this, Rotatelab_UI_GenericDialog_ButtonConfiguration_array* buttons, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.UI.GenericDialog$$EnsureAtLeastOneDialogButton
   void Rotatelab_UI_GenericDialog__EnsureAtLeastOneDialogButton (Rotatelab_UI_GenericDialog_o*
   __this, Rotatelab_UI_GenericDialog_ButtonConfiguration_array* buttons, const MethodInfo* method);
    */

void Rotatelab_UI_GenericDialog__EnsureAtLeastOneDialogButton_11121ac(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  if (param_2 != 0) {
    param_1 = *(int *)(param_2 + 0xc);
  }
  if (param_2 != 0 && param_1 != 0) {
    return;
  }
  thunk_FUN_00f23fd0(*(undefined4 *)(_UNK_01122210 + 0x11221cc));
  uVar1 = thunk_FUN_00f00cdc();
  uVar2 = thunk_FUN_00f23fd0(*(undefined4 *)(_UNK_01122214 + 0x11221e0));
  System_ArgumentException___ctor_2b113a4(uVar1,uVar2,0);
  uVar2 = thunk_FUN_00f23fd0(*(undefined4 *)(_UNK_01122218 + 0x11221fc));
  func_0x00ec3920(uVar1,uVar2);
                    /* WARNING: Subroutine does not return */
  FUN_00ec3760();
}


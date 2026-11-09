/* IL2CPP: Rotatelab.UI.GenericDialog.DialogHandle$$Dispose
void Rotatelab_UI_GenericDialog_DialogHandle__Dispose (Rotatelab_UI_GenericDialog_DialogHandle_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.UI.GenericDialog.DialogHandle$$Dispose
   void Rotatelab_UI_GenericDialog_DialogHandle__Dispose (Rotatelab_UI_GenericDialog_DialogHandle_o*
   __this, const MethodInfo* method); */

void Rotatelab_UI_GenericDialog_DialogHandle__Dispose_1112aa0(int param_1)

{
  bool bVar1;
  uint *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  char *pcVar5;
  int *piVar6;
  undefined4 uVar7;
  int iVar8;
  
  pcVar5 = (char *)(_UNK_01122bc4 + 0x1122ab4);
  if (*pcVar5 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01122bc8 + 0x1122ac8));
    *pcVar5 = '\x01';
  }
  piVar6 = (int *)(param_1 + 0xc);
  if (*piVar6 == 0) {
    iVar8 = *(int *)(param_1 + 8);
    FUN_00b87610(iVar8);
    uVar7 = *(undefined4 *)(iVar8 + 0xc);
    uVar3 = thunk_FUN_00f23fd0(*(undefined4 *)(_UNK_01122bd0 + 0x1122b60));
    uVar4 = thunk_FUN_00f23fd0(*(undefined4 *)(_UNK_01122bd4 + 0x1122b70));
    uVar3 = System_String__Concat_2a0b574(uVar3,uVar7,uVar4,0);
    thunk_FUN_00f23fd0(*(undefined4 *)(_UNK_01122bd8 + 0x1122b94));
    uVar4 = thunk_FUN_00f00cdc();
    System_Exception___ctor_2bad064(uVar4,uVar3,0);
    uVar3 = thunk_FUN_00f23fd0(*(undefined4 *)(_UNK_01122bdc + 0x1122bb4));
    func_0x00ec3920(uVar4,uVar3);
                    /* WARNING: Subroutine does not return */
    FUN_00ec3760();
  }
  if (*(int *)(**(int **)(_UNK_01122bcc + 0x1122aec) + 0x74) == 0) {
    FUN_00ec3934();
  }
  System_GC__SuppressFinalize_2bae840(param_1,0);
  iVar8 = *(int *)(param_1 + 0xc);
  if (iVar8 != 0) {
    (**(code **)(iVar8 + 0xc))
              (*(undefined4 *)(iVar8 + 0x20),*(undefined4 *)(param_1 + 8),
               *(undefined4 *)(iVar8 + 0x14));
    *piVar6 = 0;
    if (*(int *)(_UNK_00f30580 + 0xf30540) != 0) {
      puVar2 = (uint *)(_UNK_00f30584 + ((uint)piVar6 >> 0x11) * 4 + 0xf547cc);
      do {
        bVar1 = (bool)hasExclusiveAccess(puVar2);
      } while (!bVar1);
      *puVar2 = *puVar2 | 1 << (((uint)piVar6 & 0x1ffff) >> 0xc);
      return;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00f078d4();
}


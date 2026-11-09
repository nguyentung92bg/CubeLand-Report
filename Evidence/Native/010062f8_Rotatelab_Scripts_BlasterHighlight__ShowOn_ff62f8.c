/* IL2CPP: Rotatelab.Scripts.BlasterHighlight$$ShowOn
void Rotatelab_Scripts_BlasterHighlight__ShowOn (Rotatelab_Scripts_BlasterHighlight_o* __this, Rotatelab_Scripts_BlasterController_o* blaster, System_Nullable_Color__o colorOverride, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.BlasterHighlight$$ShowOn
   void Rotatelab_Scripts_BlasterHighlight__ShowOn (Rotatelab_Scripts_BlasterHighlight_o* __this,
   Rotatelab_Scripts_BlasterController_o* blaster, System_Nullable_Color__o colorOverride, const
   MethodInfo* method); */

void Rotatelab_Scripts_BlasterHighlight__ShowOn_ff62f8
               (int param_1,int param_2,char param_3,undefined4 param_4,undefined4 param_5,
               undefined4 param_6,undefined4 param_7)

{
  int iVar1;
  char *pcVar2;
  
  pcVar2 = (char *)(_UNK_01006400 + 0x1006318);
  if (*pcVar2 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01006404 + 0x1006330));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01006408 + 0x100633c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0100640c + 0x1006348));
    *pcVar2 = '\x01';
  }
  Rotatelab_Scripts_BlasterHighlight__Clear_ff6414(param_1);
  *(int *)(param_1 + 0x1c) = param_2;
  thunk_FUN_00ec5080((int *)(param_1 + 0x1c),param_2);
  if (*(int *)(**(int **)(_UNK_01006410 + 0x1006374) + 0x74) == 0) {
    FUN_00ec3934();
  }
  iVar1 = UnityEngine_Object__op_Inequality_36018e4(param_2,0,0);
  if (iVar1 != 0) {
    if (param_3 == '\0') {
      param_4 = *(undefined4 *)(param_1 + 8);
      param_5 = *(undefined4 *)(param_1 + 0xc);
      param_6 = *(undefined4 *)(param_1 + 0x10);
      param_7 = *(undefined4 *)(param_1 + 0x14);
    }
    if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    Rotatelab_Scripts_BlasterController__SetBulletCountHighlighted_10353e4
              (param_2,1,param_4,param_5,param_6,param_7,*(undefined4 *)(param_1 + 0x18),0);
  }
  return;
}


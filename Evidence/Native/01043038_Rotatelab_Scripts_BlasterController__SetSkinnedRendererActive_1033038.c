/* IL2CPP: Rotatelab.Scripts.BlasterController$$SetSkinnedRendererActive
void Rotatelab_Scripts_BlasterController__SetSkinnedRendererActive (Rotatelab_Scripts_BlasterController_o* __this, bool isActive, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.BlasterController$$SetSkinnedRendererActive
   void Rotatelab_Scripts_BlasterController__SetSkinnedRendererActive
   (Rotatelab_Scripts_BlasterController_o* __this, bool isActive, const MethodInfo* method); */

void Rotatelab_Scripts_BlasterController__SetSkinnedRendererActive_1033038
               (int *param_1,uint param_2)

{
  int iVar1;
  char *pcVar2;
  int iVar3;
  undefined4 uVar4;
  
  pcVar2 = (char *)(_UNK_010431bc + 0x1043054);
  if (*pcVar2 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010431c0 + 0x1043068));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010431c4 + 0x1043074));
    *pcVar2 = '\x01';
  }
  if (param_1[4] == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_Behaviour__set_enabled_35fd7dc(param_1[4],param_2,0);
  if (param_1[0x11] == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_Renderer__set_enabled_35c51f8(param_1[0x11],param_2,0);
  if (param_1[0x12] == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar1 = UnityEngine_Component__get_gameObject_35fe360(param_1[0x12],0);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_GameObject__SetActive_3602038(iVar1,param_2 ^ 1,0);
  iVar1 = 0x48;
  if (param_2 != 0) {
    iVar1 = 0x44;
  }
  param_1[0x14] = *(int *)((int)param_1 + iVar1);
  thunk_FUN_00ec5080(param_1 + 0x14);
  iVar1 = param_1[0x15];
  if (param_1[8] == 0) {
    uVar4 = 0x3f800000;
  }
  else {
    iVar3 = param_1[0x2f];
    if (*(int *)(**(int **)(_UNK_010431c8 + 0x104313c) + 0x74) == 0) {
      FUN_00ec3934();
    }
    iVar3 = UnityEngine_Object__op_Inequality_36018e4(iVar3,0,0);
    uVar4 = _UNK_010431b8;
    if (iVar3 != 0) {
      uVar4 = 0x3f800000;
    }
  }
  if (*(int *)(**(int **)(_UNK_010431cc + 0x104317c) + 0x74) == 0) {
    FUN_00ec3934();
  }
  Rotatelab_Extensions__SetOpacity_fc1d88(iVar1,uVar4,0);
                    /* WARNING: Could not recover jumptable at 0x010431b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x118))(param_1,*(undefined4 *)(*param_1 + 0x11c));
  return;
}


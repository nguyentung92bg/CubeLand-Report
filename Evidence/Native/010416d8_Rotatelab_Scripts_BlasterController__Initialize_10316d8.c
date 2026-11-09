/* IL2CPP: Rotatelab.Scripts.BlasterController$$Initialize
void Rotatelab_Scripts_BlasterController__Initialize (Rotatelab_Scripts_BlasterController_o* __this, Rotatelab_Pool_BulletPool_o* bulletPool, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Rotatelab.Scripts.BlasterController$$Initialize
   void Rotatelab_Scripts_BlasterController__Initialize (Rotatelab_Scripts_BlasterController_o*
   __this, Rotatelab_Pool_BulletPool_o* bulletPool, const MethodInfo* method); */

void Rotatelab_Scripts_BlasterController__Initialize_10316d8(int *param_1,int param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  
  param_1[0x2c] = param_2;
  thunk_FUN_00ec5080();
  param_1[0x14] = param_1[0x11];
  thunk_FUN_00ec5080(param_1 + 0x14);
  iVar2 = param_1[6];
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  param_1[0x45] = *(int *)(iVar2 + 0x18);
  if (*(int *)(iVar2 + 0x14) == 0) {
    param_1[0x43] = *(int *)(iVar2 + 0x10);
    param_1[0x44] = 0;
  }
  else {
    iVar4 = *(int *)(iVar2 + 0x10);
    iVar5 = *(int *)(iVar2 + 0x14);
    param_1[0x44] = iVar4;
    param_1[0x43] = iVar5;
    if (iVar4 != 0) {
      param_1[0x2d] = *(int *)(iVar2 + 0x18);
    }
  }
  cVar1 = *(char *)(iVar2 + 0x1c);
  param_1[0x25] = *(int *)(iVar2 + 0x20);
  *(char *)((int)param_1 + 0xc2) = cVar1;
  (**(code **)(*param_1 + 0x110))
            (param_1,param_1[8] == 0 || cVar1 != '\0',*(undefined4 *)(*param_1 + 0x114));
  Rotatelab_Scripts_BlasterController__UpdateBulletCount_1031a08(param_1);
  uVar3 = 2;
  if (param_1[8] == 0) {
    uVar3 = 4;
  }
  (**(code **)(*param_1 + 0x150))(param_1,uVar3,*(undefined4 *)(*param_1 + 0x154));
  if (param_1[0x43] == 0x15) {
    if (param_1[0x22] == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    UnityEngine_GameObject__SetActive_3602038(param_1[0x22],1,0);
  }
  if (0 < param_1[0x25]) {
    if (param_1[0x23] == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    UnityEngine_GameObject__SetActive_3602038(param_1[0x23],1,0);
    if (param_1[0x24] == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar2 = UnityEngine_Component__get_gameObject_35fe360(param_1[0x24],0);
    if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    UnityEngine_GameObject__SetActive_3602038(iVar2,1,0);
    if (param_1[0x15] == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar2 = UnityEngine_Component__get_gameObject_35fe360(param_1[0x15],0);
    if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    UnityEngine_GameObject__SetActive_3602038(iVar2,0,0);
    Rotatelab_Scripts_BlasterController__UpdateIceHealthText_1031b30(param_1);
  }
  if (*(char *)((int)param_1 + 0xc2) != '\0') {
    Rotatelab_Scripts_BlasterController__SetHiddenModeActive_1031c54(param_1,1);
  }
  if (param_1[6] == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (*(char *)(param_1[6] + 0x26) != '\0') {
    if (param_1[0x29] == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar2 = UnityEngine_Component__get_gameObject_35fe360(param_1[0x29],0);
    if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    UnityEngine_GameObject__SetActive_3602038(iVar2,1,0);
    if (param_1[6] == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (param_1[0x29] == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    Rotatelab_Scripts_TrapController__Init_105cb48
              (param_1[0x29],*(char *)(param_1[6] + 0x27) != '\0',param_1,0);
  }
  if (param_1[6] == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (*(char *)(param_1[6] + 0x28) != '\0') {
    if (param_1[0x2a] == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar2 = UnityEngine_Component__get_gameObject_35fe360(param_1[0x2a],0);
    if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    UnityEngine_GameObject__SetActive_3602038(iVar2,1,0);
    iVar2 = param_1[6];
    if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (param_1[0x2a] == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    Rotatelab_Scripts_ColorBarrelController__Init_1031cf0
              (param_1[0x2a],*(undefined4 *)(iVar2 + 0x2c),*(undefined4 *)(iVar2 + 0x30),param_1);
  }
  return;
}


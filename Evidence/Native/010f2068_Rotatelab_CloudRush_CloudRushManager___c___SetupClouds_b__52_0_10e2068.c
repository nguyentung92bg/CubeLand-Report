/* IL2CPP: Rotatelab.CloudRush.CloudRushManager.<>c$$<SetupClouds>b__52_0
void Rotatelab_CloudRush_CloudRushManager___c___SetupClouds_b__52_0 (Rotatelab_CloudRush_CloudRushManager___c_o* __this, Rotatelab_CloudRush_CloudRushCloudController_o* cloud, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x010eb488) */
/* WARNING: Removing unreachable block (ram,0x010eb434) */
/* WARNING: Removing unreachable block (ram,0x010eb494) */
/* WARNING: Removing unreachable block (ram,0x010eb498) */
/* WARNING: Removing unreachable block (ram,0x010eb4c4) */
/* WARNING: Removing unreachable block (ram,0x010eb4d8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.CloudRush.CloudRushManager.<>c$$<SetupClouds>b__52_0
   void Rotatelab_CloudRush_CloudRushManager___c___SetupClouds_b__52_0
   (Rotatelab_CloudRush_CloudRushManager___c_o* __this,
   Rotatelab_CloudRush_CloudRushCloudController_o* cloud, const MethodInfo* method); */

undefined4
Rotatelab_CloudRush_CloudRushManager___c___SetupClouds_b__52_0_10e2068
          (undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  char *pcVar2;
  undefined4 uVar3;
  
  if (param_2 != 0) {
    pcVar2 = (char *)(_UNK_010eb544 + 0x10eb3d8);
    if (*pcVar2 == '\0') {
      FUN_00ec37c0(*(undefined4 *)(_UNK_010eb548 + 0x10eb3ec));
      FUN_00ec37c0(*(undefined4 *)(_UNK_010eb54c + 0x10eb3f8));
      *pcVar2 = '\x01';
    }
    if (*(int *)(**(int **)(_UNK_010eb550 + 0x10eb410) + 0x74) == 0) {
      FUN_00ec3934();
    }
    PrimeTween_Tween__Stop_2ced694(param_2 + 0x30,0);
    uVar1 = Rotatelab_CloudRush_CloudRushCloudController__GetOffScreenAnchoredY_10db558(param_2);
    uVar3 = *(undefined4 *)(param_2 + 0x1c);
    if (*(int *)(**(int **)(_UNK_010eb554 + 0x10eb460) + 0x74) == 0) {
      FUN_00ec3934();
    }
    Rotatelab_Extensions__SetAnchoredPosY_fc1f84(uVar3,uVar1,0);
    return _UNK_010eb540;
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00f078d4();
}


/* IL2CPP: Rotatelab.Scripts.ShieldController$$TryGetSwordHitPoint
bool Rotatelab_Scripts_ShieldController__TryGetSwordHitPoint (Rotatelab_Scripts_ShieldController_o* __this, UnityEngine_Transform_o** target, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.ShieldController$$TryGetSwordHitPoint
   bool Rotatelab_Scripts_ShieldController__TryGetSwordHitPoint
   (Rotatelab_Scripts_ShieldController_o* __this, UnityEngine_Transform_o** target, const
   MethodInfo* method); */

bool Rotatelab_Scripts_ShieldController__TryGetSwordHitPoint_1047c28
               (int param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  
  pcVar3 = (char *)(_UNK_01057d58 + 0x1057c44);
  if (*pcVar3 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01057d5c + 0x1057c58));
    *pcVar3 = '\x01';
  }
  iVar1 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                    (**(undefined4 **)(_UNK_01057d60 + 0x1057c6c));
  iVar5 = 0;
  uVar7 = 0;
  iVar6 = 0;
  while( true ) {
    if (*(int *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar4 = *(int *)(*(int *)(param_1 + 0x10) + 0x28);
    if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (*(int *)(iVar4 + 0xc) <= (int)uVar7) {
      uVar2 = 0;
      if (0x1e < iVar6) {
        uVar2 = *(undefined4 *)(param_1 + 0x18);
      }
      *param_2 = uVar2;
      thunk_FUN_00ec5080();
      return 0x1e < iVar6;
    }
    if (*(int *)(param_1 + 0x10) == 0) break;
    iVar4 = *(int *)(*(int *)(param_1 + 0x10) + 0x28);
    if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (*(uint *)(iVar4 + 0xc) <= uVar7) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f07924();
    }
    iVar4 = iVar4 + iVar5;
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar4 = Rotatelab_Grid_GridManager__GetGridCell_1106d80
                      (iVar1,*(undefined4 *)(iVar4 + 0x10),*(undefined4 *)(iVar4 + 0x14),
                       *(undefined4 *)(iVar4 + 0x18),0);
    iVar5 = iVar5 + 0xc;
    uVar7 = uVar7 + 1;
    iVar6 = iVar6 + (uint)*(byte *)(iVar4 + 8);
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00f078d4();
}


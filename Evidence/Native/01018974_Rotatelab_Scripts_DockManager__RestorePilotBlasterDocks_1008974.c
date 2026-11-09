/* IL2CPP: Rotatelab.Scripts.DockManager$$RestorePilotBlasterDocks
void Rotatelab_Scripts_DockManager__RestorePilotBlasterDocks (Rotatelab_Scripts_DockManager_o* __this, UnityEngine_Vector3_o docksRootOffset, float duration, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.DockManager$$RestorePilotBlasterDocks
   void Rotatelab_Scripts_DockManager__RestorePilotBlasterDocks (Rotatelab_Scripts_DockManager_o*
   __this, UnityEngine_Vector3_o docksRootOffset, float duration, const MethodInfo* method); */

void Rotatelab_Scripts_DockManager__RestorePilotBlasterDocks_1008974
               (int param_1,float param_2,float param_3,float param_4,undefined4 param_5)

{
  undefined4 uVar1;
  char *pcVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined1 auStack_70 [16];
  
  pcVar2 = (char *)(_UNK_01018b00 + 0x101899c);
  if (*pcVar2 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01018b04 + 0x10189b4));
    *pcVar2 = '\x01';
  }
  iVar4 = 0;
  uVar3 = 0;
  while( true ) {
    if (*(int *)(param_1 + 0x4c) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (*(int *)(*(int *)(param_1 + 0x4c) + 0xc) <= (int)uVar3) {
      return;
    }
    iVar5 = *(int *)(param_1 + 0x4c);
    if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (*(uint *)(iVar5 + 0xc) <= uVar3) break;
    iVar5 = *(int *)(iVar5 + uVar3 * 4 + 0x10);
    if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    uVar1 = UnityEngine_Component__get_transform_35fe190(iVar5,0);
    iVar5 = *(int *)(param_1 + 0x58);
    if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (*(uint *)(iVar5 + 0xc) <= uVar3) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f07924();
    }
    iVar5 = iVar5 + iVar4;
    fVar6 = *(float *)(iVar5 + 0x10);
    fVar7 = *(float *)(iVar5 + 0x14);
    fVar8 = *(float *)(iVar5 + 0x18);
    if (*(int *)(**(int **)(_UNK_01018b08 + 0x1018a7c) + 0x74) == 0) {
      FUN_00ec3934();
    }
    PrimeTween_Tween__LocalPosition_2ce550c
              (auStack_70,uVar1,fVar6 - param_2,fVar7 - param_3,fVar8 - param_4,param_5,0,0,0,0,0,1,
               0,0,0,0,0);
    iVar4 = iVar4 + 0xc;
    uVar3 = uVar3 + 1;
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00f07924();
}


/* IL2CPP: Rotatelab.Scripts.GiftWrapperController$$AnimateCut
void Rotatelab_Scripts_GiftWrapperController__AnimateCut (Rotatelab_Scripts_GiftWrapperController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.GiftWrapperController$$AnimateCut
   void Rotatelab_Scripts_GiftWrapperController__AnimateCut
   (Rotatelab_Scripts_GiftWrapperController_o* __this, const MethodInfo* method); */

void Rotatelab_Scripts_GiftWrapperController__AnimateCut_100ee70(int param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  char *pcVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  undefined4 uVar9;
  int *piVar10;
  undefined1 auStack_38 [32];
  
  iVar8 = *(int *)(param_1 + 0x24);
  uVar4 = 0;
  while( true ) {
    if (iVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if ((int)*(uint *)(iVar8 + 0xc) <= (int)uVar4) {
      iVar8 = *(int *)(param_1 + 0x1c);
      if (iVar8 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      uVar4 = 4 - *(int *)(param_1 + 0x38);
      if (*(uint *)(iVar8 + 0xc) <= uVar4) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f07924();
      }
      if (*(int *)(param_1 + 0x14) == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      UnityEngine_MeshFilter__set_sharedMesh_35ce1a4
                (*(int *)(param_1 + 0x14),*(undefined4 *)(iVar8 + uVar4 * 4 + 0x10),0);
      pcVar3 = (char *)(_UNK_0101ee58 + 0x101ecf4);
      if (*pcVar3 == '\0') {
        FUN_00ec37c0(*(undefined4 *)(_UNK_0101ee5c + 0x101ed08));
        *pcVar3 = '\x01';
      }
      *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + -1;
      Rotatelab_Scripts_GiftWrapperController__UpdateHpTexts_100ec08(param_1);
      if (*(int *)(param_1 + 0x38) == 0) {
        uVar4 = 0;
        piVar10 = *(int **)(_UNK_0101ee60 + 0x101ed4c);
        while( true ) {
          if (*(int *)(param_1 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
            thunk_FUN_00f078d4();
          }
          if (*(int *)(*(int *)(param_1 + 0x28) + 0xc) <= (int)uVar4) break;
          iVar8 = *(int *)(param_1 + 0x28);
          if (iVar8 == 0) {
                    /* WARNING: Subroutine does not return */
            thunk_FUN_00f078d4();
          }
          if (*(uint *)(iVar8 + 0xc) <= uVar4) {
                    /* WARNING: Subroutine does not return */
            thunk_FUN_00f07924();
          }
          iVar8 = *(int *)(iVar8 + uVar4 * 4 + 0x10);
          if (iVar8 == 0) {
                    /* WARNING: Subroutine does not return */
            thunk_FUN_00f078d4();
          }
          uVar1 = TMPro_TMP_Text__get_transform_34fc774(iVar8,0);
          if (*(char *)(_UNK_0101ee64 + 0x101edb4) == '\0') {
            FUN_00ec37c0(piVar10);
            *(undefined1 *)(_UNK_0101ee68 + 0x101edd4) = 1;
          }
          puVar2 = *(undefined4 **)(*piVar10 + 0x5c);
          uVar7 = *puVar2;
          uVar5 = puVar2[1];
          uVar9 = puVar2[2];
          if (*(int *)(**(int **)(_UNK_0101ee6c + 0x101ede4) + 0x74) == 0) {
            FUN_00ec3934();
          }
          PrimeTween_Tween__Scale_2ce6560
                    (auStack_38,uVar1,uVar7,uVar5,uVar9,0x3eb33333,0,0,0,0,0,1,0,0,0,0,0);
          uVar4 = uVar4 + 1;
        }
      }
      return;
    }
    if (*(uint *)(iVar8 + 0xc) <= uVar4) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f07924();
    }
    iVar6 = *(int *)(iVar8 + 0x10 + uVar4 * 4);
    if (iVar6 == 0) break;
    UnityEngine_ParticleSystem__Play_368e960(iVar6,0);
    uVar4 = uVar4 + 1;
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00f078d4();
}


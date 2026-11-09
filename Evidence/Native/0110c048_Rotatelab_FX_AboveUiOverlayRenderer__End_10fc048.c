/* IL2CPP: Rotatelab.FX.AboveUiOverlayRenderer$$End
void Rotatelab_FX_AboveUiOverlayRenderer__End (Rotatelab_FX_AboveUiOverlayRenderer_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.FX.AboveUiOverlayRenderer$$End
   void Rotatelab_FX_AboveUiOverlayRenderer__End (Rotatelab_FX_AboveUiOverlayRenderer_o* __this,
   const MethodInfo* method); */

void Rotatelab_FX_AboveUiOverlayRenderer__End_10fc048(int param_1)

{
  bool bVar1;
  uint *puVar2;
  char *pcVar3;
  int *piVar4;
  int iVar5;
  undefined4 uVar6;
  int *piVar7;
  undefined4 uVar8;
  
  pcVar3 = (char *)(_UNK_0110c218 + 0x110c05c);
  if (*pcVar3 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0110c21c + 0x110c070));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0110c220 + 0x110c07c));
    *pcVar3 = '\x01';
  }
  piVar7 = *(int **)(_UNK_0110c224 + 0x110c094);
  piVar4 = (int *)(param_1 + 0x1c);
  iVar5 = *piVar4;
  if (*(int *)(*piVar7 + 0x74) == 0) {
    FUN_00ec3934();
  }
  iVar5 = UnityEngine_Object__op_Equality_36033f4(iVar5,0,0);
  if (iVar5 != 0) {
    return;
  }
  uVar6 = *(undefined4 *)(param_1 + 0x20);
  if (*(int *)(*piVar7 + 0x74) == 0) {
    FUN_00ec3934();
  }
  iVar5 = UnityEngine_Object__op_Inequality_36018e4(uVar6,0,0);
  if (iVar5 != 0) {
    uVar8 = *(undefined4 *)(param_1 + 0x20);
    uVar6 = *(undefined4 *)(param_1 + 0x24);
    if (*(int *)(**(int **)(_UNK_0110c228 + 0x110c108) + 0x74) == 0) {
      FUN_00ec3934();
    }
    Rotatelab_Extensions__SetLayerRecursively_fc27c4(uVar8,uVar6,0);
  }
  *(undefined4 *)(param_1 + 0x20) = 0;
  thunk_FUN_00ec5080((undefined4 *)(param_1 + 0x20),0);
  if (*(int *)(param_1 + 0x14) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_Behaviour__set_enabled_35fd7dc(*(int *)(param_1 + 0x14),0,0);
  if (*(int *)(param_1 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_UI_RawImage__set_texture_39b6be0(*(int *)(param_1 + 0x18),0,0);
  if (*(int *)(param_1 + 0x10) != 0) {
    UnityEngine_Behaviour__set_enabled_35fd7dc(*(int *)(param_1 + 0x10),0,0);
    if (*(int *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    UnityEngine_Camera__set_targetTexture_35adc00(*(int *)(param_1 + 0x10),0,0);
    if (*piVar4 != 0) {
      UnityEngine_RenderTexture__Release_35e0384(*piVar4,0);
      iVar5 = *piVar4;
      if (*(int *)(*piVar7 + 0x74) == 0) {
        FUN_00ec3934();
      }
      UnityEngine_Object__Destroy_3609820(iVar5,0);
      *piVar4 = 0;
      if (*(int *)(_UNK_00f30580 + 0xf30540) != 0) {
        puVar2 = (uint *)(_UNK_00f30584 + ((uint)piVar4 >> 0x11) * 4 + 0xf547cc);
        do {
          bVar1 = (bool)hasExclusiveAccess(puVar2);
        } while (!bVar1);
        *puVar2 = *puVar2 | 1 << (((uint)piVar4 & 0x1ffff) >> 0xc);
        return;
      }
      return;
    }
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00f078d4();
}


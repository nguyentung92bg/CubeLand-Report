/* IL2CPP: Rotatelab.FX.RenderersOverlayEffect$$DestroyRenderPass
void Rotatelab_FX_RenderersOverlayEffect__DestroyRenderPass (Rotatelab_FX_RenderersOverlayEffect_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.FX.RenderersOverlayEffect$$DestroyRenderPass
   void Rotatelab_FX_RenderersOverlayEffect__DestroyRenderPass
   (Rotatelab_FX_RenderersOverlayEffect_o* __this, const MethodInfo* method); */

void Rotatelab_FX_RenderersOverlayEffect__DestroyRenderPass_10fe2a0(int param_1)

{
  bool bVar1;
  uint *puVar2;
  char *pcVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  undefined4 uVar8;
  int *piVar9;
  int *piVar10;
  int *piVar11;
  int *piVar12;
  
  pcVar3 = (char *)(_UNK_0110e450 + 0x110e2b8);
  if (*pcVar3 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0110e454 + 0x110e2cc));
    *pcVar3 = '\x01';
  }
  piVar10 = (int *)(param_1 + 0x1c);
  piVar12 = (int *)(param_1 + 0x18);
  iVar6 = 4;
  piVar11 = *(int **)(_UNK_0110e458 + 0x110e2ec);
  do {
    if (*piVar12 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    uVar7 = iVar6 - 4;
    if (*(int *)(*piVar12 + 0xc) <= (int)uVar7) {
      piVar9 = (int *)(param_1 + 0x14);
      if (*piVar9 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      uVar8 = *(undefined4 *)(*piVar9 + 0x40);
      if (*(int *)(*piVar11 + 0x74) == 0) {
        FUN_00ec3934();
      }
      UnityEngine_Object__DestroyImmediate_36099bc(uVar8,0);
      *piVar9 = 0;
      thunk_FUN_00ec5080(piVar9,0);
      *piVar12 = 0;
      thunk_FUN_00ec5080(piVar12,0);
      *piVar10 = 0;
      if (*(int *)(_UNK_00f30580 + 0xf30540) != 0) {
        puVar2 = (uint *)(_UNK_00f30584 + ((uint)piVar10 >> 0x11) * 4 + 0xf547cc);
        do {
          bVar1 = (bool)hasExclusiveAccess(puVar2);
        } while (!bVar1);
        *puVar2 = *puVar2 | 1 << (((uint)piVar10 & 0x1ffff) >> 0xc);
        return;
      }
      return;
    }
    iVar4 = *piVar12;
    if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (*(uint *)(iVar4 + 0xc) <= uVar7) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f07924();
    }
    uVar8 = *(undefined4 *)(iVar4 + iVar6 * 4);
    if (*(int *)(*piVar11 + 0x74) == 0) {
      FUN_00ec3934();
    }
    iVar4 = UnityEngine_Object__op_Inequality_36018e4(uVar8,0,0);
    if (iVar4 != 0) {
      iVar4 = *piVar12;
      if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      if (*(uint *)(iVar4 + 0xc) <= uVar7) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f07924();
      }
      iVar4 = *(int *)(iVar4 + iVar6 * 4);
      if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      iVar4 = UnityEngine_Component__get_gameObject_35fe360(iVar4,0);
      iVar5 = *piVar10;
      if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      if (*(uint *)(iVar5 + 0xc) <= uVar7) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f07924();
      }
      if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      UnityEngine_GameObject__set_layer_3601f44(iVar4,*(undefined4 *)(iVar5 + iVar6 * 4),0);
    }
    iVar6 = iVar6 + 1;
  } while( true );
}


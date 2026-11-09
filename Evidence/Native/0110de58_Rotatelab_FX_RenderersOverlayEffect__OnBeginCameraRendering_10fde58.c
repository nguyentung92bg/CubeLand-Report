/* IL2CPP: Rotatelab.FX.RenderersOverlayEffect$$OnBeginCameraRendering
void Rotatelab_FX_RenderersOverlayEffect__OnBeginCameraRendering (Rotatelab_FX_RenderersOverlayEffect_o* __this, UnityEngine_Rendering_ScriptableRenderContext_o context, UnityEngine_Camera_o* camera, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.FX.RenderersOverlayEffect$$OnBeginCameraRendering
   void Rotatelab_FX_RenderersOverlayEffect__OnBeginCameraRendering
   (Rotatelab_FX_RenderersOverlayEffect_o* __this, UnityEngine_Rendering_ScriptableRenderContext_o
   context, UnityEngine_Camera_o* camera, const MethodInfo* method); */

void Rotatelab_FX_RenderersOverlayEffect__OnBeginCameraRendering_10fde58
               (int param_1,undefined4 param_2,int param_3)

{
  bool bVar1;
  uint *puVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  int *piVar6;
  char *pcVar7;
  int iVar8;
  uint uVar9;
  
  pcVar7 = (char *)(_UNK_0110df4c + 0x110de70);
  if (*pcVar7 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0110df50 + 0x110de84));
    *pcVar7 = '\x01';
  }
  if (*(int *)(param_1 + 0x14) == 0) {
    return;
  }
  if (param_3 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar3 = UnityEngine_Camera__get_cameraType_35acd1c(param_3,0);
  if (iVar3 != 2) {
    uVar4 = UnityEngine_Camera__get_main_35aede4(0);
    if (*(int *)(**(int **)(_UNK_0110df54 + 0x110ded0) + 0x74) == 0) {
      FUN_00ec3934();
    }
    iVar3 = UnityEngine_Object__op_Inequality_36018e4(param_3,uVar4,0);
    if (iVar3 != 0) {
      return;
    }
  }
  iVar3 = UnityEngine_Rendering_Universal_CameraExtensions__GetUniversalAdditionalCameraData_34663a8
                    (param_3,0);
  if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar3 = UnityEngine_Rendering_Universal_UniversalAdditionalCameraData__get_scriptableRenderer_34672a8
                    (iVar3,0);
  uVar4 = *(undefined4 *)(param_1 + 0x14);
  if (iVar3 != 0) {
    pcVar7 = (char *)(_UNK_0341d500 + 0x341d464);
    if (*pcVar7 == '\0') {
      thunk_FUN_00ec37c0(*(undefined4 *)(_UNK_0341d504 + 0x341d478),uVar4,0);
      *pcVar7 = '\x01';
    }
    iVar3 = *(int *)(iVar3 + 0x20);
    if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar8 = *(int *)(iVar3 + 8);
    uVar9 = *(uint *)(iVar3 + 0xc);
    piVar6 = *(int **)(_UNK_0341d508 + 0x341d4b0);
    *(int *)(iVar3 + 0x10) = *(int *)(iVar3 + 0x10) + 1;
    if (iVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (uVar9 < *(uint *)(iVar8 + 0xc)) {
      *(uint *)(iVar3 + 0xc) = uVar9 + 1;
      puVar5 = (undefined4 *)(iVar8 + uVar9 * 4 + 0x10);
      *puVar5 = uVar4;
    }
    else {
      uVar9 = *(uint *)(iVar3 + 0xc);
      System_Collections_Generic_List_object___EnsureCapacity_267e0f0
                (iVar3,uVar9 + 1,
                 *(undefined4 *)
                  (*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*piVar6 + 0x10) + 0x60) + 0x38) +
                                    0x10) + 0x60) + 0x3c));
      iVar8 = *(int *)(iVar3 + 8);
      *(uint *)(iVar3 + 0xc) = uVar9 + 1;
      if (iVar8 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      if (*(uint *)(iVar8 + 0xc) <= uVar9) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f07924();
      }
      puVar5 = (undefined4 *)(iVar8 + uVar9 * 4 + 0x10);
      *puVar5 = uVar4;
    }
    if (*(int *)(_UNK_00f30580 + 0xf30540) != 0) {
      puVar2 = (uint *)(_UNK_00f30584 + ((uint)puVar5 >> 0x11) * 4 + 0xf547cc);
      do {
        bVar1 = (bool)hasExclusiveAccess(puVar2);
      } while (!bVar1);
      *puVar2 = *puVar2 | 1 << (((uint)puVar5 & 0x1ffff) >> 0xc);
      return;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00f078d4();
}


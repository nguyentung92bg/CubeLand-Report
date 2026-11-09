/* IL2CPP: Rotatelab.FX.RenderersOverlayEffect.RenderPass$$RecordRenderGraph
void Rotatelab_FX_RenderersOverlayEffect_RenderPass__RecordRenderGraph (Rotatelab_FX_RenderersOverlayEffect_RenderPass_o* __this, UnityEngine_Rendering_RenderGraphModule_RenderGraph_o* renderGraph, UnityEngine_Rendering_ContextContainer_o* frameData, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x0110ec60) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.FX.RenderersOverlayEffect.RenderPass$$RecordRenderGraph
   void Rotatelab_FX_RenderersOverlayEffect_RenderPass__RecordRenderGraph
   (Rotatelab_FX_RenderersOverlayEffect_RenderPass_o* __this,
   UnityEngine_Rendering_RenderGraphModule_RenderGraph_o* renderGraph,
   UnityEngine_Rendering_ContextContainer_o* frameData, const MethodInfo* method); */

void Rotatelab_FX_RenderersOverlayEffect_RenderPass__RecordRenderGraph_10fe4b0
               (int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *puVar5;
  uint uVar6;
  int *piVar7;
  int *piVar8;
  int *piVar9;
  char *pcVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  int aiStack_450 [49];
  undefined4 uStack_38c;
  undefined4 uStack_388;
  undefined4 uStack_384;
  undefined4 uStack_380;
  undefined4 uStack_37c;
  undefined4 uStack_378;
  undefined4 uStack_374;
  undefined4 uStack_370;
  undefined4 uStack_36c;
  int iStack_364;
  undefined4 uStack_360;
  undefined4 uStack_35c;
  int iStack_358;
  int iStack_354;
  undefined4 uStack_350;
  undefined4 uStack_34c;
  undefined4 uStack_348;
  int iStack_344;
  undefined4 uStack_338;
  undefined4 uStack_330;
  int **ppiStack_32c;
  int iStack_328;
  int *piStack_324;
  undefined1 auStack_320 [280];
  undefined1 auStack_208 [280];
  undefined4 auStack_f0 [50];
  int iStack_28;
  
  pcVar10 = (char *)(_UNK_0110ed08 + 0x110e4d4);
  iStack_28 = **(int **)(_UNK_0110ed0c + 0x110e4e4);
  if (*pcVar10 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0110ed10 + 0x110e4fc));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0110ed14 + 0x110e508));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0110ed18 + 0x110e514));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0110ed1c + 0x110e520));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0110ed20 + 0x110e52c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0110ed24 + 0x110e538));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0110ed28 + 0x110e544));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0110ed2c + 0x110e550));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0110ed30 + 0x110e55c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0110ed34 + 0x110e568));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0110ed38 + 0x110e574));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0110ed3c + 0x110e580));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0110ed40 + 0x110e58c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0110ed44 + 0x110e598));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0110ed48 + 0x110e5a4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0110ed4c + 0x110e5b0));
    *pcVar10 = '\x01';
  }
  piStack_324 = (int *)0x0;
  iStack_328 = 0;
  FUN_00f88e5c(auStack_f0,200);
  FUN_00f88e5c(auStack_208,0x118);
  if (param_3 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar1 = func_0x01115378(param_3,**(undefined4 **)(_UNK_0110ed50 + 0x110e5f0));
  iVar2 = func_0x01115378(param_3,**(undefined4 **)(_UNK_0110ed54 + 0x110e608));
  uVar3 = func_0x01115378(param_3,**(undefined4 **)(_UNK_0110ed58 + 0x110e620));
  iStack_354 = func_0x01115378(param_3,**(undefined4 **)(_UNK_0110ed68 + 0x110e694));
  piVar9 = *(int **)(_UNK_0110ed6c + 0x110e6ac);
  iVar4 = *piVar9;
  if (*(int *)(iVar4 + 0x74) == 0) {
    FUN_00ec3934();
    iVar4 = *piVar9;
  }
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  aiStack_450[0] = **(int **)(_UNK_0110ed74 + 0x110e6f0);
  aiStack_450[1] = 0x21;
  aiStack_450[2] = **(undefined4 **)(_UNK_0110ed78 + 0x110e6fc);
  piStack_324 = (int *)UnityEngine_Rendering_RenderGraphModule_RenderGraph__AddRasterRenderPass_object__1596244
                                 (param_2,**(undefined4 **)(_UNK_0110ed70 + 0x110e6e4),&iStack_328,
                                  **(undefined4 **)(iVar4 + 0x5c));
  ppiStack_32c = &piStack_324;
  uStack_330 = 0;
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  aiStack_450[2] = *(undefined4 *)(iVar2 + 0x180);
  aiStack_450[3] = 0;
  aiStack_450[0] = iVar2;
  aiStack_450[1] = uVar3;
  UnityEngine_Rendering_Universal_ScriptableRenderPass__CreateDrawingSettings_3408f34
            (auStack_320,param_1,*(undefined4 *)(param_1 + 100),iVar1);
  thunk_FUN_00f95db8(auStack_f0,auStack_320,200);
  uVar3 = *(undefined4 *)(param_1 + 0x40);
  if (*(int *)(**(int **)(_UNK_0110ed7c + 0x110e778) + 0x74) == 0) {
    FUN_00ec3934();
  }
  UnityEngine_Rendering_DrawingSettings__set_overrideMaterial_3633374(auStack_f0,uVar3,0);
  iStack_364 = iStack_328;
  iStack_358 = param_2;
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uStack_360 = *(undefined4 *)(param_1 + 0x44);
  uStack_35c = *(undefined4 *)(iVar1 + 8);
  uVar3 = *(undefined4 *)(param_1 + 0x50);
  uVar11 = *(undefined4 *)(param_1 + 0x54);
  uVar13 = *(undefined4 *)(param_1 + 0x58);
  uVar15 = *(undefined4 *)(param_1 + 0x5c);
  uVar14 = *(undefined4 *)(param_1 + 0x48);
  uVar17 = *(undefined4 *)(param_1 + 0x4c);
  uVar12 = *(undefined4 *)(param_1 + 0x60);
  uVar16 = *(undefined4 *)(iVar1 + 0xc);
  FUN_00f88e5c(auStack_320,0x118);
  uStack_36c = 0;
  iVar1 = 0xc4;
  uStack_38c = uStack_360;
  puVar5 = (undefined4 *)((uint)auStack_f0 | 4);
  piVar9 = aiStack_450;
  uStack_388 = uVar14;
  uStack_384 = uVar17;
  uStack_380 = uVar3;
  uStack_37c = uVar11;
  uStack_378 = uVar13;
  uStack_374 = uVar15;
  uStack_370 = uVar12;
  do {
    iVar1 = iVar1 + -4;
    *piVar9 = *puVar5;
    puVar5 = puVar5 + 1;
    piVar9 = piVar9 + 1;
  } while (iVar1 != 0);
  UnityEngine_Rendering_RendererListParams___ctor_3636ddc
            (auStack_320,uStack_35c,uVar16,auStack_f0[0]);
  iVar2 = iStack_354;
  iVar1 = iStack_358;
  thunk_FUN_00f95db8(auStack_208,auStack_320,0x118);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_Rendering_RenderGraphModule_RenderGraph__CreateRendererList_337669c
            (&uStack_350,iVar1,auStack_208,0);
  piVar9 = piStack_324;
  iVar1 = iStack_328;
  uStack_338 = uStack_348;
  if (iStack_364 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  *(undefined4 *)(iStack_364 + 0x10) = uStack_348;
  *(ulonglong *)(iStack_364 + 8) = CONCAT44(uStack_34c,uStack_350);
  if (iStack_328 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (piStack_324 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar4 = *piStack_324;
  uVar6 = (uint)*(ushort *)(iVar4 + 0xb6);
  if (uVar6 != 0) {
    piVar7 = (int *)(*(int *)(iVar4 + 0x58) + 4);
    do {
      if (piVar7[-1] == **(int **)(_UNK_0110ed80 + 0x110e8e0)) {
        puVar5 = (undefined4 *)(iVar4 + *piVar7 * 8 + 0xe8);
        goto LAB_0110e928;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 2;
    } while (uVar6 != 0);
  }
  puVar5 = (undefined4 *)FUN_00efdb38(piStack_324,**(int **)(_UNK_0110ed80 + 0x110e8e0),5);
LAB_0110e928:
  (*(code *)*puVar5)(piVar9,iVar1 + 8,puVar5[1]);
  piVar9 = piStack_324;
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_Rendering_Universal_UniversalResourceData__get_activeColorTexture_3416390
            (&uStack_350,iVar2,0);
  iVar1 = iStack_344;
  uVar12 = uStack_348;
  uVar11 = uStack_34c;
  uVar3 = uStack_350;
  if (piVar9 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  piVar7 = *(int **)(_UNK_0110ed84 + 0x110e988);
  iVar2 = *piVar9;
  iVar4 = *piVar7;
  uVar6 = (uint)*(ushort *)(iVar2 + 0xb6);
  if (uVar6 != 0) {
    piVar8 = (int *)(*(int *)(iVar2 + 0x58) + 4);
    do {
      if (piVar8[-1] == iVar4) {
        puVar5 = (undefined4 *)(iVar2 + *piVar8 * 8 + 0xc0);
        goto LAB_0110e9d4;
      }
      uVar6 = uVar6 - 1;
      piVar8 = piVar8 + 2;
    } while (uVar6 != 0);
  }
  puVar5 = (undefined4 *)FUN_00efdb38(piVar9,iVar4,0);
LAB_0110e9d4:
  aiStack_450[3] = puVar5[1];
  aiStack_450[1] = 0;
  aiStack_450[2] = 2;
  aiStack_450[0] = iVar1;
  (*(code *)*puVar5)(piVar9,uVar3,uVar11,uVar12);
  piVar9 = piStack_324;
  if (iStack_354 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_Rendering_Universal_UniversalResourceData__get_activeDepthTexture_341647c
            (&uStack_350,iStack_354,0);
  if (piVar9 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar1 = *piVar9;
  iVar2 = *piVar7;
  uVar6 = (uint)*(ushort *)(iVar1 + 0xb6);
  if (uVar6 != 0) {
    piVar7 = (int *)(*(int *)(iVar1 + 0x58) + 4);
    do {
      if (piVar7[-1] == iVar2) {
        puVar5 = (undefined4 *)(iVar1 + *piVar7 * 8 + 0xd0);
        goto LAB_0110ea98;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 2;
    } while (uVar6 != 0);
  }
  puVar5 = (undefined4 *)FUN_00efdb38(piVar9,iVar2,2);
LAB_0110ea98:
  aiStack_450[2] = puVar5[1];
  aiStack_450[1] = 2;
  aiStack_450[0] = iStack_344;
  (*(code *)*puVar5)(piVar9,uStack_350,uStack_34c,uStack_348);
  piVar9 = piStack_324;
  piVar7 = *(int **)(_UNK_0110ed88 + 0x110eacc);
  iVar1 = *piVar7;
  if (*(int *)(iVar1 + 0x74) == 0) {
    FUN_00ec3934();
    iVar1 = *piVar7;
  }
  iVar2 = *(int *)(*(int *)(iVar1 + 0x5c) + 4);
  if (iVar2 == 0) {
    if (*(int *)(iVar1 + 0x74) == 0) {
      FUN_00ec3934();
      iVar1 = *piVar7;
    }
    uVar3 = **(undefined4 **)(iVar1 + 0x5c);
    iVar2 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_0110ed8c + 0x110eb1c));
    UnityEngine_Rendering_RenderGraphModule_BaseRenderFunc_object__RasterGraphContext____ctor_1de2670
              (iVar2,uVar3,**(undefined4 **)(_UNK_0110ed90 + 0x110eb30),0);
    piVar7 = (int *)(*(int *)(*piVar7 + 0x5c) + 4);
    *piVar7 = iVar2;
    thunk_FUN_00ec5080(piVar7,iVar2);
  }
  if (piVar9 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar4 = **(int **)(_UNK_0110ed94 + 0x110eb6c);
  iVar1 = *piVar9;
  uVar6 = (uint)*(ushort *)(iVar1 + 0xb6);
  if (uVar6 != 0) {
    piVar7 = (int *)(*(int *)(iVar1 + 0x58) + 4);
    do {
      if (piVar7[-1] == *(int *)(iVar4 + 0x10)) {
        iVar1 = iVar1 + (*piVar7 + (uint)*(ushort *)(iVar4 + 0x2c)) * 8 + 0xc0;
        goto LAB_0110ebc0;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 2;
    } while (uVar6 != 0);
  }
  iVar1 = FUN_00efdb38(piVar9);
LAB_0110ebc0:
  iVar1 = FUN_00ec3930(*(undefined4 *)(iVar1 + 4),iVar4);
  (**(code **)(iVar1 + 4))(piVar9,iVar2,iVar1);
  piVar9 = piStack_324;
  if (piStack_324 != (int *)0x0) {
    iVar1 = *piStack_324;
    uVar6 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar7[-1] == **(int **)(_UNK_0110ed98 + 0x110ec00)) {
          puVar5 = (undefined4 *)(iVar1 + *piVar7 * 8 + 0xc0);
          goto LAB_0110ec48;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 2;
      } while (uVar6 != 0);
    }
    puVar5 = (undefined4 *)FUN_00efdb38(piStack_324,**(int **)(_UNK_0110ed98 + 0x110ec00),0);
LAB_0110ec48:
    (*(code *)*puVar5)(piVar9,puVar5[1]);
  }
  if (**(int **)(_UNK_0110ed9c + 0x110ec78) != iStack_28) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


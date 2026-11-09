/* IL2CPP: Rotatelab.FX.RenderersOverlayEffect.RenderPass$$.ctor
void Rotatelab_FX_RenderersOverlayEffect_RenderPass___ctor (Rotatelab_FX_RenderersOverlayEffect_RenderPass_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.FX.RenderersOverlayEffect.RenderPass$$.ctor
   void Rotatelab_FX_RenderersOverlayEffect_RenderPass___ctor
   (Rotatelab_FX_RenderersOverlayEffect_RenderPass_o* __this, const MethodInfo* method); */

void Rotatelab_FX_RenderersOverlayEffect_RenderPass___ctor_10fdf58(int param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  uint uVar6;
  int *piVar7;
  int iVar8;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  pcVar5 = (char *)(_UNK_0110e25c + 0x110df70);
  if (*pcVar5 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0110e260 + 0x110df84));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0110e264 + 0x110df90));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0110e268 + 0x110df9c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0110e26c + 0x110dfa8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0110e270 + 0x110dfb4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0110e274 + 0x110dfc0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0110e278 + 0x110dfcc));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0110e27c + 0x110dfd8));
    *pcVar5 = '\x01';
  }
  if (*(int *)(**(int **)(_UNK_0110e280 + 0x110dfec) + 0x74) == 0) {
    FUN_00ec3934();
  }
  UnityEngine_Rendering_RenderQueueRange__get_all_3633ba0(&uStack_50,0);
  uStack_2c = 0;
  uStack_30 = 0;
  uStack_28 = 0;
  System_Nullable_RenderQueueRange____ctor_17dd934
            (&uStack_30,uStack_50,uStack_4c,**(undefined4 **)(_UNK_0110e284 + 0x110e024));
  uStack_4c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_48 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_44 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_50 = 0;
  uStack_40 = 0;
  uStack_3c = uStack_4c;
  uStack_38 = uStack_48;
  uStack_34 = uStack_44;
  UnityEngine_Rendering_FilteringSettings___ctor_3633abc
            (&uStack_50,uStack_30,uStack_2c,uStack_28,2,0xffffffff,0,0);
  puVar1 = *(undefined4 **)(_UNK_0110e288 + 0x110e084);
  *(undefined4 *)(param_1 + 0x44) = uStack_50;
  *(undefined4 *)(param_1 + 0x48) = uStack_4c;
  *(undefined4 *)(param_1 + 0x4c) = uStack_48;
  *(undefined4 *)(param_1 + 0x50) = uStack_44;
  uVar2 = *puVar1;
  *(ulonglong *)(param_1 + 0x54) = CONCAT44(uStack_3c,uStack_40);
  *(ulonglong *)(param_1 + 0x5c) = CONCAT44(uStack_34,uStack_38);
  iVar3 = thunk_FUN_00f00cdc(uVar2);
  System_Collections_Generic_List_ShaderTagId____ctor_26ba620
            (iVar3,**(undefined4 **)(_UNK_0110e28c + 0x110e0a0));
  uStack_54 = 0;
  UnityEngine_Rendering_ShaderTagId___ctor_3639d70
            (&uStack_54,**(undefined4 **)(_UNK_0110e290 + 0x110e0b8),0);
  if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar4 = *(int *)(iVar3 + 8);
  uVar6 = *(uint *)(iVar3 + 0xc);
  piVar7 = *(int **)(_UNK_0110e294 + 0x110e0f0);
  *(int *)(iVar3 + 0x10) = *(int *)(iVar3 + 0x10) + 1;
  if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (uVar6 < *(uint *)(iVar4 + 0xc)) {
    *(uint *)(iVar3 + 0xc) = uVar6 + 1;
    *(undefined4 *)(iVar4 + uVar6 * 4 + 0x10) = uStack_54;
  }
  else {
    System_Collections_Generic_List_ShaderTagId___AddWithResize_26baeac
              (iVar3,uStack_54,*(undefined4 *)(*(int *)(*(int *)(*piVar7 + 0x10) + 0x60) + 0x38));
  }
  uStack_58 = 0;
  UnityEngine_Rendering_ShaderTagId___ctor_3639d70
            (&uStack_58,**(undefined4 **)(_UNK_0110e298 + 0x110e148),0);
  iVar4 = *(int *)(iVar3 + 8);
  uVar6 = *(uint *)(iVar3 + 0xc);
  iVar8 = *piVar7;
  *(int *)(iVar3 + 0x10) = *(int *)(iVar3 + 0x10) + 1;
  if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (uVar6 < *(uint *)(iVar4 + 0xc)) {
    *(uint *)(iVar3 + 0xc) = uVar6 + 1;
    *(undefined4 *)(iVar4 + uVar6 * 4 + 0x10) = uStack_58;
  }
  else {
    System_Collections_Generic_List_ShaderTagId___AddWithResize_26baeac
              (iVar3,uStack_58,*(undefined4 *)(*(int *)(*(int *)(iVar8 + 0x10) + 0x60) + 0x38));
  }
  uStack_5c = 0;
  UnityEngine_Rendering_ShaderTagId___ctor_3639d70
            (&uStack_5c,**(undefined4 **)(_UNK_0110e29c + 0x110e1c8),0);
  iVar4 = *(int *)(iVar3 + 8);
  uVar6 = *(uint *)(iVar3 + 0xc);
  iVar8 = *piVar7;
  *(int *)(iVar3 + 0x10) = *(int *)(iVar3 + 0x10) + 1;
  if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (uVar6 < *(uint *)(iVar4 + 0xc)) {
    *(uint *)(iVar3 + 0xc) = uVar6 + 1;
    *(undefined4 *)(iVar4 + uVar6 * 4 + 0x10) = uStack_5c;
  }
  else {
    System_Collections_Generic_List_ShaderTagId___AddWithResize_26baeac
              (iVar3,uStack_5c,*(undefined4 *)(*(int *)(*(int *)(iVar8 + 0x10) + 0x60) + 0x38));
  }
  *(int *)(param_1 + 100) = iVar3;
  thunk_FUN_00ec5080((int *)(param_1 + 100),iVar3);
  UnityEngine_Rendering_Universal_ScriptableRenderPass___ctor_3408cc4(param_1,0);
  return;
}


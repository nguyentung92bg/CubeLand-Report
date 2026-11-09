/* IL2CPP: Rotatelab.FX.RenderersOverlayEffect$$Activate
void Rotatelab_FX_RenderersOverlayEffect__Activate (Rotatelab_FX_RenderersOverlayEffect_o* __this, UnityEngine_Renderer_array* renderers, UnityEngine_Color_o color, float fadeTime, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.FX.RenderersOverlayEffect$$Activate
   void Rotatelab_FX_RenderersOverlayEffect__Activate (Rotatelab_FX_RenderersOverlayEffect_o*
   __this, UnityEngine_Renderer_array* renderers, UnityEngine_Color_o color, float fadeTime, const
   MethodInfo* method); */

void Rotatelab_FX_RenderersOverlayEffect__Activate_10fcdac
               (int param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
               undefined4 param_6,undefined4 param_7)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  char *pcVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  
  pcVar5 = (char *)(_UNK_0110d0f8 + 0x110cdd8);
  if (*pcVar5 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0110d0fc + 0x110cdec));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0110d100 + 0x110cdf8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0110d104 + 0x110ce04));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0110d108 + 0x110ce10));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0110d10c + 0x110ce1c));
    *pcVar5 = '\x01';
  }
  Rotatelab_FX_RenderersOverlayEffect__Stop_10fd190(param_1,0);
  *(int *)(param_1 + 0x18) = param_2;
  thunk_FUN_00ec5080((int *)(param_1 + 0x18),param_2);
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar1 = FUN_00ec388c(**(undefined4 **)(_UNK_0110d110 + 0x110ce58),*(undefined4 *)(param_2 + 0xc));
  piVar9 = (int *)(param_1 + 0x1c);
  *piVar9 = iVar1;
  thunk_FUN_00ec5080(piVar9,iVar1);
  uVar2 = *(uint *)(param_2 + 0xc);
  if (0 < (int)uVar2) {
    iVar1 = 4;
    do {
      iVar8 = *piVar9;
      uVar6 = iVar1 - 4;
      if (uVar2 <= uVar6) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f07924();
      }
      iVar7 = *(int *)(param_2 + iVar1 * 4);
      if (iVar7 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      iVar7 = UnityEngine_Component__get_gameObject_35fe360(iVar7,0);
      if (iVar7 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      uVar3 = UnityEngine_GameObject__get_layer_3601e60(iVar7,0);
      if (iVar8 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      if (*(uint *)(iVar8 + 0xc) <= uVar6) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f07924();
      }
      *(undefined4 *)(iVar8 + iVar1 * 4) = uVar3;
      if (*(uint *)(param_2 + 0xc) <= uVar6) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f07924();
      }
      iVar8 = *(int *)(param_2 + iVar1 * 4);
      if (iVar8 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      iVar8 = UnityEngine_Component__get_gameObject_35fe360(iVar8,0);
      if (iVar8 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      UnityEngine_GameObject__set_layer_3601f44(iVar8,1,0);
      uVar2 = *(uint *)(param_2 + 0xc);
      iVar8 = iVar1 + -3;
      iVar1 = iVar1 + 1;
    } while (iVar8 < (int)uVar2);
  }
  iVar1 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_0110d114 + 0x110cf64));
  Rotatelab_FX_RenderersOverlayEffect_RenderPass___ctor_10fdf58();
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  puVar4 = *(undefined4 **)(_UNK_0110d118 + 0x110cf94);
  uVar3 = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)(iVar1 + 8) = 0x226;
  iVar8 = thunk_FUN_00f00cdc(*puVar4);
  UnityEngine_Material___ctor_35c7654(iVar8,uVar3,0);
  if (*(int *)(**(int **)(_UNK_0110d11c + 0x110cfc0) + 0x74) == 0) {
    FUN_00ec3934();
  }
  Rotatelab_Extensions__WithOpacity_fc175c(&uStack_40,param_3,param_4,param_5,param_6,0,0);
  if (iVar8 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_Material__set_color_35c7c80(iVar8,uStack_40,uStack_3c,uStack_38,uStack_34,0);
  *(int *)(iVar1 + 0x40) = iVar8;
  thunk_FUN_00ec5080((int *)(iVar1 + 0x40),iVar8);
  piVar9 = (int *)(param_1 + 0x14);
  *piVar9 = iVar1;
  thunk_FUN_00ec5080(piVar9,iVar1);
  if (*piVar9 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar3 = *(undefined4 *)(*piVar9 + 0x40);
  if (*(int *)(**(int **)(_UNK_0110d120 + 0x110d074) + 0x74) == 0) {
    FUN_00ec3934();
  }
  PrimeTween_Tween__MaterialAlpha_2ce85e4(&uStack_40,uVar3,param_6,param_7,0,0,0,0,0,1,0,0,0,0,0);
  *(ulonglong *)(param_1 + 0x20) = CONCAT44(uStack_3c,uStack_40);
  *(ulonglong *)(param_1 + 0x28) = CONCAT44(uStack_34,uStack_38);
  thunk_FUN_00ec5080(param_1 + 0x28,0);
  return;
}


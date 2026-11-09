/* IL2CPP: Rotatelab.FX.RenderersOverlayEffect.RenderPass$$.cctor
void Rotatelab_FX_RenderersOverlayEffect_RenderPass___cctor (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.FX.RenderersOverlayEffect.RenderPass$$.cctor
   void Rotatelab_FX_RenderersOverlayEffect_RenderPass___cctor (const MethodInfo* method); */

void Rotatelab_FX_RenderersOverlayEffect_RenderPass___cctor_10feda0(void)

{
  bool bVar1;
  uint *puVar2;
  undefined4 uVar3;
  int *piVar4;
  uint uVar5;
  char *pcVar6;
  
  pcVar6 = (char *)(_UNK_0110ee38 + 0x110edb0);
  if (*pcVar6 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0110ee3c + 0x110edc4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0110ee40 + 0x110edd0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0110ee44 + 0x110eddc));
    *pcVar6 = '\x01';
  }
  uVar3 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_0110ee48 + 0x110edf0));
  UnityEngine_Rendering_ProfilingSampler___ctor_32fe0bc
            (uVar3,**(undefined4 **)(_UNK_0110ee4c + 0x110ee08),0);
  piVar4 = *(int **)(_UNK_0110ee50 + 0x110ee1c);
  **(undefined4 **)(*piVar4 + 0x5c) = uVar3;
  uVar5 = *(uint *)(*piVar4 + 0x5c);
  if (*(int *)(_UNK_00f30580 + 0xf30540) != 0) {
    puVar2 = (uint *)(_UNK_00f30584 + (uVar5 >> 0x11) * 4 + 0xf547cc);
    do {
      bVar1 = (bool)hasExclusiveAccess(puVar2);
    } while (!bVar1);
    *puVar2 = *puVar2 | 1 << ((uVar5 & 0x1ffff) >> 0xc);
    return;
  }
  return;
}


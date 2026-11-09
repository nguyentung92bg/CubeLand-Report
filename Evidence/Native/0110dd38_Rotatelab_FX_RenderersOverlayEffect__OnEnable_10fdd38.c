/* IL2CPP: Rotatelab.FX.RenderersOverlayEffect$$OnEnable
void Rotatelab_FX_RenderersOverlayEffect__OnEnable (Rotatelab_FX_RenderersOverlayEffect_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.FX.RenderersOverlayEffect$$OnEnable
   void Rotatelab_FX_RenderersOverlayEffect__OnEnable (Rotatelab_FX_RenderersOverlayEffect_o*
   __this, const MethodInfo* method); */

void Rotatelab_FX_RenderersOverlayEffect__OnEnable_10fdd38(undefined4 param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  char *pcVar5;
  int iVar6;
  int *piVar7;
  undefined4 *puVar8;
  bool bVar9;
  
  pcVar5 = (char *)(_UNK_0110ddb4 + 0x110dd4c);
  if (*pcVar5 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0110ddb8 + 0x110dd60));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0110ddbc + 0x110dd6c));
    *pcVar5 = '\x01';
  }
  uVar1 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_0110ddc0 + 0x110dd80));
  System_Action_ScriptableRenderContext__object____ctor_1f19e34
            (uVar1,param_1,**(undefined4 **)(_UNK_0110ddc4 + 0x110dd9c),0);
  pcVar5 = (char *)(_UNK_03645854 + 0x36457a4);
  if (*pcVar5 == '\0') {
    thunk_FUN_00ec37c0(*(undefined4 *)(_UNK_03645858 + 0x36457b8),0);
    thunk_FUN_00ec37c0(*(undefined4 *)(_UNK_0364585c + 0x36457c4));
    *pcVar5 = '\x01';
  }
  piVar7 = *(int **)(_UNK_03645860 + 0x36457d8);
  puVar8 = *(undefined4 **)(_UNK_03645864 + 0x36457ec);
  iVar2 = *(int *)(*(int *)(*piVar7 + 0x5c) + 0x18);
  do {
    iVar6 = 0;
    iVar3 = System_Delegate__Combine_2bbca94(iVar2,uVar1,0);
    if (iVar3 != 0) {
      uVar4 = *puVar8;
      iVar6 = thunk_FUN_00f00bc8(iVar3,uVar4);
      if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f4fe34(iVar3,uVar4);
      }
    }
    iVar3 = thunk_FUN_00efd180(*(int *)(*piVar7 + 0x5c) + 0x18,iVar6,iVar2);
    bVar9 = iVar3 != iVar2;
    iVar2 = iVar3;
  } while (bVar9);
  return;
}


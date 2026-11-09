/* IL2CPP: Rotatelab.FX.IDimEffectTarget$$StopActiveDimEffect
void Rotatelab_FX_IDimEffectTarget__StopActiveDimEffect (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x0110d3c8) */
/* WARNING: Removing unreachable block (ram,0x0110e2c0) */
/* WARNING: Removing unreachable block (ram,0x0110e2d4) */
/* WARNING: Removing unreachable block (ram,0x0110e2e8) */
/* WARNING: Removing unreachable block (ram,0x0110e2f4) */
/* WARNING: Removing unreachable block (ram,0x0110e2f8) */
/* WARNING: Removing unreachable block (ram,0x0110e3e0) */
/* WARNING: Removing unreachable block (ram,0x0110e3ec) */
/* WARNING: Removing unreachable block (ram,0x0110e3f0) */
/* WARNING: Removing unreachable block (ram,0x0110e404) */
/* WARNING: Removing unreachable block (ram,0x00ec375c) */
/* WARNING: Removing unreachable block (ram,0x00f30540) */
/* WARNING: Removing unreachable block (ram,0x00f30544) */
/* WARNING: Removing unreachable block (ram,0x00f30568) */
/* WARNING: Removing unreachable block (ram,0x00f30570) */
/* WARNING: Removing unreachable block (ram,0x00f30574) */
/* WARNING: Removing unreachable block (ram,0x00f3057c) */
/* WARNING: Removing unreachable block (ram,0x0110e308) */
/* WARNING: Removing unreachable block (ram,0x0110e314) */
/* WARNING: Removing unreachable block (ram,0x0110e318) */
/* WARNING: Removing unreachable block (ram,0x0110e324) */
/* WARNING: Removing unreachable block (ram,0x0110e328) */
/* WARNING: Removing unreachable block (ram,0x0110e33c) */
/* WARNING: Removing unreachable block (ram,0x0110e340) */
/* WARNING: Removing unreachable block (ram,0x0110e358) */
/* WARNING: Removing unreachable block (ram,0x0110e364) */
/* WARNING: Removing unreachable block (ram,0x0110e368) */
/* WARNING: Removing unreachable block (ram,0x0110e374) */
/* WARNING: Removing unreachable block (ram,0x0110e378) */
/* WARNING: Removing unreachable block (ram,0x0110e384) */
/* WARNING: Removing unreachable block (ram,0x0110e388) */
/* WARNING: Removing unreachable block (ram,0x0110e3a4) */
/* WARNING: Removing unreachable block (ram,0x0110e3a8) */
/* WARNING: Removing unreachable block (ram,0x0110e3b4) */
/* WARNING: Removing unreachable block (ram,0x0110e3b8) */
/* WARNING: Removing unreachable block (ram,0x0110e3c4) */
/* WARNING: Removing unreachable block (ram,0x0110e3c8) */
/* WARNING: Removing unreachable block (ram,0x0110e3d8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.FX.IDimEffectTarget$$StopActiveDimEffect
   void Rotatelab_FX_IDimEffectTarget__StopActiveDimEffect (const MethodInfo* method); */

void Rotatelab_FX_IDimEffectTarget__StopActiveDimEffect_10fd124(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 *puVar7;
  char *pcVar8;
  int *piVar9;
  undefined4 uVar10;
  int *piVar11;
  int iVar12;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  pcVar8 = (char *)(_UNK_0110d184 + 0x110d134);
  if (*pcVar8 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0110d188 + 0x110d148));
    *pcVar8 = '\x01';
  }
  iVar4 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                    (**(undefined4 **)(_UNK_0110d18c + 0x110d15c));
  if (iVar4 != 0) {
    pcVar8 = (char *)(_UNK_0110d3d8 + 0x110d1ac);
    if (*pcVar8 == '\0') {
      FUN_00ec37c0(*(undefined4 *)(_UNK_0110d3dc + 0x110d1c0));
      FUN_00ec37c0(*(undefined4 *)(_UNK_0110d3e0 + 0x110d1cc));
      FUN_00ec37c0(*(undefined4 *)(_UNK_0110d3e4 + 0x110d1d8));
      FUN_00ec37c0(*(undefined4 *)(_UNK_0110d3e8 + 0x110d1e4));
      FUN_00ec37c0(*(undefined4 *)(_UNK_0110d3ec + 0x110d1f0));
      *pcVar8 = '\x01';
    }
    uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    piVar11 = *(int **)(_UNK_0110d3f0 + 0x110d210);
    uStack_38 = 0;
    if (*(int *)(*piVar11 + 0x74) == 0) {
      FUN_00ec3934();
    }
    PrimeTween_Tween__Complete_2ced7bc((undefined4 *)(iVar4 + 0x20),0);
    if (*(int *)(iVar4 + 0x14) != 0) {
      uVar5 = *(undefined4 *)(*(int *)(iVar4 + 0x14) + 0x40);
      PrimeTween_Easing__op_Implicit_2ce2e54(&uStack_50,5,0);
      uVar3 = uStack_44;
      uVar2 = uStack_48;
      uVar1 = uStack_4c;
      uVar10 = uStack_50;
      if (*(int *)(*piVar11 + 0x74) == 0) {
        FUN_00ec3934();
      }
      PrimeTween_Tween__MaterialAlpha_2ce85e4
                (&uStack_50,uVar5,0,0x3e19999a,uVar10,uVar1,uVar2,uVar3,uStack_40,1,0,0,0,0,0);
      piVar11 = *(int **)(_UNK_0110d3f4 + 0x110d2d8);
      iVar6 = *piVar11;
      uStack_38 = uStack_50;
      uStack_34 = uStack_4c;
      uStack_30 = uStack_48;
      uStack_2c = uStack_44;
      if (*(int *)(iVar6 + 0x74) == 0) {
        FUN_00ec3934();
        iVar6 = *piVar11;
      }
      piVar9 = *(int **)(_UNK_0110d3f8 + 0x110d304);
      puVar7 = *(undefined4 **)(iVar6 + 0x5c);
      iVar12 = puVar7[1];
      if (iVar12 == 0) {
        if (*(int *)(iVar6 + 0x74) == 0) {
          FUN_00ec3934();
          puVar7 = *(undefined4 **)(*piVar11 + 0x5c);
        }
        uVar10 = *puVar7;
        iVar12 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_0110d3fc + 0x110d334));
        System_Action_object____ctor_1f11414
                  (iVar12,uVar10,**(undefined4 **)(_UNK_0110d400 + 0x110d354),0);
        piVar11 = (int *)(*(int *)(*piVar11 + 0x5c) + 4);
        *piVar11 = iVar12;
        thunk_FUN_00ec5080(piVar11,iVar12);
      }
      if (*(int *)(*piVar9 + 0x74) == 0) {
        FUN_00ec3934();
      }
      PrimeTween_Tween__OnComplete_object__15d62e8
                (&uStack_50,&uStack_38,iVar4,iVar12,0,**(undefined4 **)(_UNK_0110d404 + 0x110d398));
      *(undefined4 *)(iVar4 + 0x20) = uStack_50;
      *(undefined4 *)(iVar4 + 0x24) = uStack_4c;
      *(undefined4 *)(iVar4 + 0x28) = uStack_48;
      *(undefined4 *)(iVar4 + 0x2c) = uStack_44;
      thunk_FUN_00ec5080(iVar4 + 0x28,0);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00f078d4();
}


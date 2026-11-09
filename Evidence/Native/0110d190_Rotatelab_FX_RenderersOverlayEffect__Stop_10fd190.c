/* IL2CPP: Rotatelab.FX.RenderersOverlayEffect$$Stop
void Rotatelab_FX_RenderersOverlayEffect__Stop (Rotatelab_FX_RenderersOverlayEffect_o* __this, float fadeTime, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.FX.RenderersOverlayEffect$$Stop
   void Rotatelab_FX_RenderersOverlayEffect__Stop (Rotatelab_FX_RenderersOverlayEffect_o* __this,
   float fadeTime, const MethodInfo* method); */

void Rotatelab_FX_RenderersOverlayEffect__Stop_10fd190(int param_1,float param_2)

{
  bool bVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint *puVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 *puVar8;
  int iVar9;
  char *pcVar10;
  int *piVar11;
  undefined4 uVar12;
  uint uVar13;
  int *piVar14;
  int iVar15;
  int *piVar16;
  int *piVar17;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  pcVar10 = (char *)(_UNK_0110d3d8 + 0x110d1ac);
  if (*pcVar10 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0110d3dc + 0x110d1c0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0110d3e0 + 0x110d1cc));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0110d3e4 + 0x110d1d8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0110d3e8 + 0x110d1e4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0110d3ec + 0x110d1f0));
    *pcVar10 = '\x01';
  }
  uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  piVar14 = *(int **)(_UNK_0110d3f0 + 0x110d210);
  uStack_38 = 0;
  if (*(int *)(*piVar14 + 0x74) == 0) {
    FUN_00ec3934();
  }
  PrimeTween_Tween__Complete_2ced7bc((undefined4 *)(param_1 + 0x20),0);
  if (*(int *)(param_1 + 0x14) != 0) {
    if (param_2 <= 0.0) {
      pcVar10 = (char *)(_UNK_0110e450 + 0x110e2b8);
      if (*pcVar10 == '\0') {
        FUN_00ec37c0(*(undefined4 *)(_UNK_0110e454 + 0x110e2cc));
        *pcVar10 = '\x01';
      }
      piVar14 = (int *)(param_1 + 0x1c);
      piVar17 = (int *)(param_1 + 0x18);
      iVar7 = 4;
      piVar11 = *(int **)(_UNK_0110e458 + 0x110e2ec);
      do {
        if (*piVar17 == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        uVar13 = iVar7 - 4;
        if (*(int *)(*piVar17 + 0xc) <= (int)uVar13) {
          piVar16 = (int *)(param_1 + 0x14);
          if (*piVar16 == 0) {
                    /* WARNING: Subroutine does not return */
            thunk_FUN_00f078d4();
          }
          uVar12 = *(undefined4 *)(*piVar16 + 0x40);
          if (*(int *)(*piVar11 + 0x74) == 0) {
            FUN_00ec3934();
          }
          UnityEngine_Object__DestroyImmediate_36099bc(uVar12,0);
          *piVar16 = 0;
          thunk_FUN_00ec5080(piVar16,0);
          *piVar17 = 0;
          thunk_FUN_00ec5080(piVar17,0);
          *piVar14 = 0;
          if (*(int *)(_UNK_00f30580 + 0xf30540) != 0) {
            puVar5 = (uint *)(_UNK_00f30584 + ((uint)piVar14 >> 0x11) * 4 + 0xf547cc);
            do {
              bVar1 = (bool)hasExclusiveAccess(puVar5);
            } while (!bVar1);
            *puVar5 = *puVar5 | 1 << (((uint)piVar14 & 0x1ffff) >> 0xc);
            return;
          }
          return;
        }
        iVar15 = *piVar17;
        if (iVar15 == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        if (*(uint *)(iVar15 + 0xc) <= uVar13) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f07924();
        }
        uVar12 = *(undefined4 *)(iVar15 + iVar7 * 4);
        if (*(int *)(*piVar11 + 0x74) == 0) {
          FUN_00ec3934();
        }
        iVar15 = UnityEngine_Object__op_Inequality_36018e4(uVar12,0,0);
        if (iVar15 != 0) {
          iVar15 = *piVar17;
          if (iVar15 == 0) {
                    /* WARNING: Subroutine does not return */
            thunk_FUN_00f078d4();
          }
          if (*(uint *)(iVar15 + 0xc) <= uVar13) {
                    /* WARNING: Subroutine does not return */
            thunk_FUN_00f07924();
          }
          iVar15 = *(int *)(iVar15 + iVar7 * 4);
          if (iVar15 == 0) {
                    /* WARNING: Subroutine does not return */
            thunk_FUN_00f078d4();
          }
          iVar15 = UnityEngine_Component__get_gameObject_35fe360(iVar15,0);
          iVar9 = *piVar14;
          if (iVar9 == 0) {
                    /* WARNING: Subroutine does not return */
            thunk_FUN_00f078d4();
          }
          if (*(uint *)(iVar9 + 0xc) <= uVar13) {
                    /* WARNING: Subroutine does not return */
            thunk_FUN_00f07924();
          }
          if (iVar15 == 0) {
                    /* WARNING: Subroutine does not return */
            thunk_FUN_00f078d4();
          }
          UnityEngine_GameObject__set_layer_3601f44(iVar15,*(undefined4 *)(iVar9 + iVar7 * 4),0);
        }
        iVar7 = iVar7 + 1;
      } while( true );
    }
    uVar6 = *(undefined4 *)(*(int *)(param_1 + 0x14) + 0x40);
    PrimeTween_Easing__op_Implicit_2ce2e54(&uStack_50,5,0);
    uVar4 = uStack_44;
    uVar3 = uStack_48;
    uVar2 = uStack_4c;
    uVar12 = uStack_50;
    if (*(int *)(*piVar14 + 0x74) == 0) {
      FUN_00ec3934();
    }
    PrimeTween_Tween__MaterialAlpha_2ce85e4
              (&uStack_50,uVar6,0,param_2,uVar12,uVar2,uVar3,uVar4,uStack_40,1,0,0,0,0,0);
    piVar14 = *(int **)(_UNK_0110d3f4 + 0x110d2d8);
    iVar7 = *piVar14;
    uStack_38 = uStack_50;
    uStack_34 = uStack_4c;
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    if (*(int *)(iVar7 + 0x74) == 0) {
      FUN_00ec3934();
      iVar7 = *piVar14;
    }
    piVar11 = *(int **)(_UNK_0110d3f8 + 0x110d304);
    puVar8 = *(undefined4 **)(iVar7 + 0x5c);
    iVar15 = puVar8[1];
    if (iVar15 == 0) {
      if (*(int *)(iVar7 + 0x74) == 0) {
        FUN_00ec3934();
        puVar8 = *(undefined4 **)(*piVar14 + 0x5c);
      }
      uVar12 = *puVar8;
      iVar15 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_0110d3fc + 0x110d334));
      System_Action_object____ctor_1f11414
                (iVar15,uVar12,**(undefined4 **)(_UNK_0110d400 + 0x110d354),0);
      piVar14 = (int *)(*(int *)(*piVar14 + 0x5c) + 4);
      *piVar14 = iVar15;
      thunk_FUN_00ec5080(piVar14,iVar15);
    }
    if (*(int *)(*piVar11 + 0x74) == 0) {
      FUN_00ec3934();
    }
    PrimeTween_Tween__OnComplete_object__15d62e8
              (&uStack_50,&uStack_38,param_1,iVar15,0,**(undefined4 **)(_UNK_0110d404 + 0x110d398));
    *(undefined4 *)(param_1 + 0x20) = uStack_50;
    *(undefined4 *)(param_1 + 0x24) = uStack_4c;
    *(undefined4 *)(param_1 + 0x28) = uStack_48;
    *(undefined4 *)(param_1 + 0x2c) = uStack_44;
    thunk_FUN_00ec5080(param_1 + 0x28,0);
  }
  return;
}


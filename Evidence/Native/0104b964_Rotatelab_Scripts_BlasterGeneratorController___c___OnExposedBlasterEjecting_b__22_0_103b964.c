/* IL2CPP: Rotatelab.Scripts.BlasterGeneratorController.<>c$$<OnExposedBlasterEjecting>b__22_0
void Rotatelab_Scripts_BlasterGeneratorController___c___OnExposedBlasterEjecting_b__22_0 (Rotatelab_Scripts_BlasterGeneratorController___c_o* __this, Rotatelab_Scripts_BlasterGeneratorController_o* this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.BlasterGeneratorController.<>c$$<OnExposedBlasterEjecting>b__22_0
   void Rotatelab_Scripts_BlasterGeneratorController___c___OnExposedBlasterEjecting_b__22_0
   (Rotatelab_Scripts_BlasterGeneratorController___c_o* __this,
   Rotatelab_Scripts_BlasterGeneratorController_o* this, const MethodInfo* method); */

void Rotatelab_Scripts_BlasterGeneratorController___c___OnExposedBlasterEjecting_b__22_0_103b964
               (undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  float *pfVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  char *pcVar7;
  int iVar8;
  int *piVar9;
  int iVar10;
  int *piVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined4 uVar18;
  float fStack_78;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  int iStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  float fStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  float fStack_38;
  undefined4 uStack_34;
  
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  Rotatelab_Scripts_BlasterGeneratorController__UpdateRemainingBlastersText_103b1c0(param_2);
  pcVar7 = (char *)(_UNK_0104b5a0 + 0x104b260);
  if (*pcVar7 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0104b5a4 + 0x104b274));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0104b5a8 + 0x104b280));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0104b5ac + 0x104b28c));
    *pcVar7 = '\x01';
  }
  uStack_3c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  fStack_38 = *(float *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_40 = 0;
  if (*(int *)(param_2 + 0x20) < 1) {
    piVar9 = (int *)(param_2 + 0x60);
    iVar10 = *piVar9;
    if (*(int *)(**(int **)(_UNK_0104b5b0 + 0x104b2bc) + 0x74) == 0) {
      FUN_00ec3934();
    }
    iVar10 = UnityEngine_Object__op_Inequality_36018e4(iVar10,0,0);
    if (iVar10 == 0) {
      iVar10 = Rotatelab_Scripts_BlasterGeneratorController__get_RemainingBlasterCount_103adac
                         (param_2);
      if (iVar10 == 0) {
        pcVar7 = (char *)(_UNK_0104b7ec + 0x104b5dc);
        if (*pcVar7 == '\0') {
          FUN_00ec37c0(*(undefined4 *)(_UNK_0104b7f0 + 0x104b5f0));
          FUN_00ec37c0(*(undefined4 *)(_UNK_0104b7f4 + 0x104b5fc));
          FUN_00ec37c0(*(undefined4 *)(_UNK_0104b7f8 + 0x104b608));
          FUN_00ec37c0(*(undefined4 *)(_UNK_0104b7fc + 0x104b614));
          FUN_00ec37c0(*(undefined4 *)(_UNK_0104b800 + 0x104b620));
          FUN_00ec37c0(*(undefined4 *)(_UNK_0104b804 + 0x104b62c));
          *pcVar7 = '\x01';
        }
        uStack_3c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
        fStack_38 = *(float *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
        uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
        uStack_40 = 0;
        iVar10 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                           (**(undefined4 **)(_UNK_0104b808 + 0x104b648));
        if (iVar10 == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        Rotatelab_Audio_AudioManager__PlaySfx_1085fb4(iVar10,0x1b,0);
        uVar5 = UnityEngine_Component__get_transform_35fe190(param_2,0);
        uVar18 = *(undefined4 *)(param_2 + 0x58);
        iStack_5c = param_2;
        PrimeTween_Easing__op_Implicit_2ce2e54(&uStack_58,0x1a,0);
        uVar2 = uStack_4c;
        uVar13 = uStack_50;
        uVar12 = uStack_54;
        uVar4 = uStack_58;
        if (*(int *)(**(int **)(_UNK_0104b80c + 0x104b6b0) + 0x74) == 0) {
          FUN_00ec3934();
        }
        fStack_74 = 1.4013e-45;
        uStack_68 = 0;
        uStack_64 = 0;
        uStack_60 = 0;
        fStack_78 = fStack_48;
        fStack_70 = 0.0;
        fStack_6c = 0.0;
        PrimeTween_Tween__Scale_2ce4684(&uStack_58,uVar5,0,uVar18,uVar4,uVar12,uVar13,uVar2);
        piVar9 = *(int **)(_UNK_0104b810 + 0x104b708);
        iVar10 = *piVar9;
        uStack_40 = uStack_58;
        uStack_3c = uStack_54;
        fStack_38 = (float)uStack_50;
        uStack_34 = uStack_4c;
        if (*(int *)(iVar10 + 0x74) == 0) {
          FUN_00ec3934();
          iVar10 = *piVar9;
        }
        iVar1 = iStack_5c;
        puVar6 = *(undefined4 **)(iVar10 + 0x5c);
        iVar8 = puVar6[2];
        if (iVar8 == 0) {
          if (*(int *)(iVar10 + 0x74) == 0) {
            FUN_00ec3934();
            puVar6 = *(undefined4 **)(*piVar9 + 0x5c);
          }
          uVar4 = *puVar6;
          iVar8 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_0104b814 + 0x104b75c));
          System_Action_object____ctor_1f11414
                    (iVar8,uVar4,**(undefined4 **)(_UNK_0104b818 + 0x104b77c),0);
          piVar9 = (int *)(*(int *)(*piVar9 + 0x5c) + 8);
          *piVar9 = iVar8;
          thunk_FUN_00ec5080(piVar9,iVar8);
        }
        if (*(int *)(**(int **)(_UNK_0104b81c + 0x104b7a4) + 0x74) == 0) {
          FUN_00ec3934();
        }
        PrimeTween_Tween__OnComplete_object__15d62e8
                  (&uStack_58,&uStack_40,iVar1,iVar8,0,**(undefined4 **)(_UNK_0104b820 + 0x104b7c8))
        ;
        return;
      }
      if (*(int *)(param_2 + 0x5c) == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      iVar10 = System_Collections_Generic_List_object___get_Item_267d814
                         (*(int *)(param_2 + 0x5c),0,**(undefined4 **)(_UNK_0104b5b4 + 0x104b318));
      *piVar9 = iVar10;
      thunk_FUN_00ec5080(piVar9,iVar10);
      if (*piVar9 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      iVar10 = UnityEngine_Component__get_gameObject_35fe360(*piVar9,0);
      if (iVar10 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      UnityEngine_GameObject__SetActive_3602038(iVar10,1,0);
      piVar11 = (int *)*piVar9;
      if (piVar11 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      (**(code **)(*piVar11 + 0x110))(piVar11,1,*(undefined4 *)(*piVar11 + 0x114));
      pfVar3 = (float *)(param_2 + 0x68);
      PrimeTween_Sequence__Complete_2ceea60(pfVar3,0);
      PrimeTween_Sequence__Create_2cef1e0(&uStack_50,1,0,1,0,0,0);
      iVar10 = *(int *)(param_2 + 0x40);
      uStack_40 = uStack_50;
      uStack_3c = uStack_4c;
      fStack_38 = fStack_48;
      uStack_34 = uStack_44;
      if (iVar10 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      UnityEngine_Transform__get_localScale_36154c0(&fStack_78,iVar10,0);
      fVar16 = *(float *)(param_2 + 0x50);
      fVar14 = fStack_78 * fVar16;
      fVar15 = fStack_74 * fVar16;
      fVar17 = *(float *)(param_2 + 0x54);
      fVar16 = fStack_70 * fVar16;
      if (*(int *)(**(int **)(_UNK_0104b5b8 + 0x104b424) + 0x74) == 0) {
        FUN_00ec3934();
      }
      PrimeTween_Tween__Scale_2ce6560
                (&fStack_78,iVar10,fVar14,fVar15,fVar16,fVar17 * 0.5,0,0,0,0,0,2,3,0,0,0,0);
      PrimeTween_Sequence__Group_2cef730
                (&uStack_60,&uStack_40,fStack_78,fStack_74,fStack_70,fStack_6c,0);
      uStack_40 = uStack_60;
      uStack_3c = iStack_5c;
      fStack_38 = (float)uStack_58;
      uStack_34 = uStack_54;
      if (*piVar9 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      uVar4 = UnityEngine_Component__get_transform_35fe190(*piVar9,0);
      uVar13 = *(undefined4 *)(param_2 + 0x4c);
      uVar12 = *(undefined4 *)(param_2 + 0x54);
      PrimeTween_Easing__op_Implicit_2ce2e54(&fStack_78,0x1b,0);
      PrimeTween_Tween__Scale_2ce4a3c
                (&fStack_78,uVar4,0,uVar13,uVar12,fStack_78,fStack_74,fStack_70,fStack_6c,uStack_68,
                 1,0,0,0,0,0);
      PrimeTween_Sequence__Group_2cef730
                (&fStack_78,&uStack_40,fStack_78,fStack_74,fStack_70,fStack_6c,0);
      *pfVar3 = fStack_78;
      pfVar3[1] = fStack_74;
      pfVar3[2] = fStack_70;
      pfVar3[3] = fStack_6c;
      thunk_FUN_00ec5080(param_2 + 0x70,0);
    }
  }
  return;
}


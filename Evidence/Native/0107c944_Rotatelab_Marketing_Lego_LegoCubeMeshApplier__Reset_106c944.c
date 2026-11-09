/* IL2CPP: Rotatelab.Marketing.Lego.LegoCubeMeshApplier$$Reset
void Rotatelab_Marketing_Lego_LegoCubeMeshApplier__Reset (Rotatelab_Marketing_Lego_LegoCubeMeshApplier_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* IL2CPP: Rotatelab.Marketing.Lego.LegoCubeMeshApplier$$Reset
   void Rotatelab_Marketing_Lego_LegoCubeMeshApplier__Reset
   (Rotatelab_Marketing_Lego_LegoCubeMeshApplier_o* __this, const MethodInfo* method); */

void Rotatelab_Marketing_Lego_LegoCubeMeshApplier__Reset_106c944(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 *puVar6;
  int *piVar7;
  char *pcVar8;
  int iVar9;
  int iVar10;
  undefined4 *puVar11;
  byte bVar12;
  uint uVar13;
  int *piVar14;
  uint in_fpscr;
  int iStack_44;
  
  uVar1 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uVar4 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uVar2 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  iVar5 = Rotatelab_Marketing_Lego_LegoCubeMeshApplier__TryGetBaseColor_106c9bc();
  if (iVar5 == 0) {
    return;
  }
  *(undefined1 *)(param_1 + 0x88) = 1;
  *(undefined4 *)(param_1 + 0x78) = uVar1;
  *(undefined4 *)(param_1 + 0x7c) = uVar4;
  *(undefined4 *)(param_1 + 0x80) = uVar2;
  *(undefined4 *)(param_1 + 0x58) = uVar1;
  *(undefined4 *)(param_1 + 0x5c) = uVar4;
  *(undefined4 *)(param_1 + 0x60) = uVar2;
  *(undefined4 *)(param_1 + 100) = 0;
  *(undefined4 *)(param_1 + 0x68) = uVar1;
  *(undefined4 *)(param_1 + 0x6c) = uVar4;
  *(undefined4 *)(param_1 + 0x70) = uVar2;
  *(undefined4 *)(param_1 + 0x74) = 0;
  *(undefined4 *)(param_1 + 0x38) = uVar1;
  *(undefined4 *)(param_1 + 0x3c) = uVar4;
  *(undefined4 *)(param_1 + 0x40) = uVar2;
  *(undefined4 *)(param_1 + 0x44) = 0;
  *(undefined4 *)(param_1 + 0x48) = uVar1;
  *(undefined4 *)(param_1 + 0x4c) = uVar4;
  *(undefined4 *)(param_1 + 0x50) = uVar2;
  *(undefined4 *)(param_1 + 0x54) = 0;
  *(undefined4 *)(param_1 + 0x34) = 0;
  pcVar8 = (char *)(_UNK_0107c910 + 0x107c310);
  if (*pcVar8 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0107c914 + 0x107c324));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0107c918 + 0x107c330));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0107c91c + 0x107c33c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0107c920 + 0x107c348));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0107c924 + 0x107c354));
    *pcVar8 = '\x01';
  }
  piVar14 = (int *)(param_1 + 0x8c);
  iStack_44 = 0;
  if (*piVar14 == 0) {
    iVar5 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_0107c928 + 0x107c380));
    UnityEngine_MaterialPropertyBlock___ctor_35c3c50(iVar5,0);
    *piVar14 = iVar5;
    thunk_FUN_00ec5080(piVar14,iVar5);
  }
  iVar5 = UnityEngine_Component__GetComponentsInChildren_object__143ff14
                    (param_1,1,**(undefined4 **)(_UNK_0107c92c + 0x107c3b0));
  uVar1 = _UNK_0107c84c;
  uVar13 = 0;
  puVar11 = *(undefined4 **)(_UNK_0107c930 + 0x107c478);
  do {
    if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if ((int)*(uint *)(iVar5 + 0xc) <= (int)uVar13) {
      return;
    }
    if (*(uint *)(iVar5 + 0xc) <= uVar13) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f07924();
    }
    iVar9 = *(int *)(iVar5 + 0x10 + uVar13 * 4);
    if (iVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar3 = UnityEngine_Object__get_name_36081bc(iVar9,0);
    if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar3 = System_String__StartsWith_2a097d0(iVar3,*puVar11,0);
    if (iVar3 != 0) {
      if (iVar9 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      iVar3 = UnityEngine_Component__TryGetComponent_object__14402fc
                        (iVar9,&iStack_44,**(undefined4 **)(_UNK_0107c940 + 0x107c500));
      if (iVar3 != 0) {
        bVar12 = 0;
        uVar4 = UnityEngine_Object__get_name_36081bc(iVar9,0);
        iVar9 = Rotatelab_Marketing_Lego_LegoCubeMeshApplier__GetVariantIndex_106cc7c
                          (param_1,uVar4,uVar13);
        if (*(char *)(param_1 + 0x14) != '\0') {
          bVar12 = *(byte *)(param_1 + 0x30) ^ 1;
        }
        piVar7 = *(int **)(_UNK_0107c938 + 0x107c588);
        if (iStack_44 == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        UnityEngine_Renderer__GetPropertyBlock_35c5108(iStack_44,*piVar14,0);
        iVar3 = *piVar7;
        iVar10 = *piVar14;
        if (*(int *)(iVar3 + 0x74) == 0) {
          FUN_00ec3934();
          iVar3 = *piVar7;
        }
        uVar4 = 0x3f800000;
        if (bVar12 == 0) {
          uVar4 = uVar1;
        }
        if (iVar10 == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        UnityEngine_MaterialPropertyBlock__SetFloat_35c4024
                  (iVar10,*(undefined4 *)(*(int *)(iVar3 + 0x5c) + 4),uVar4,0);
        iVar3 = *piVar7;
        iVar10 = *piVar14;
        if (*(int *)(iVar3 + 0x74) == 0) {
          FUN_00ec3934();
          iVar3 = *piVar7;
        }
        if (iVar10 == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        uVar4 = VectorSignedToFloat(iVar9 + -2,(byte)(in_fpscr >> 0x16) & 3);
        UnityEngine_MaterialPropertyBlock__SetFloat_35c4024
                  (iVar10,*(undefined4 *)(*(int *)(iVar3 + 0x5c) + 8),uVar4,0);
        if (*(int *)(param_1 + 0x8c) == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        UnityEngine_MaterialPropertyBlock__SetFloat_35c4024
                  (*(int *)(param_1 + 0x8c),*(undefined4 *)(*(int *)(*piVar7 + 0x5c) + 0xc),
                   *(undefined4 *)(param_1 + 0x18),0);
        if (*(int *)(param_1 + 0x8c) == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        UnityEngine_MaterialPropertyBlock__SetFloat_35c4024
                  (*(int *)(param_1 + 0x8c),*(undefined4 *)(*(int *)(*piVar7 + 0x5c) + 0x10),
                   *(undefined4 *)(param_1 + 0x1c),0);
        if (*(int *)(param_1 + 0x8c) == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        UnityEngine_MaterialPropertyBlock__SetFloat_35c4024
                  (*(int *)(param_1 + 0x8c),*(undefined4 *)(*(int *)(*piVar7 + 0x5c) + 0x14),
                   *(undefined4 *)(param_1 + 0x20),0);
        if (*(int *)(param_1 + 0x8c) == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        UnityEngine_MaterialPropertyBlock__SetFloat_35c4024
                  (*(int *)(param_1 + 0x8c),*(undefined4 *)(*(int *)(*piVar7 + 0x5c) + 0x18),
                   *(undefined4 *)(param_1 + 0x24),0);
        if (*(int *)(param_1 + 0x8c) == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        UnityEngine_MaterialPropertyBlock__SetFloat_35c4024
                  (*(int *)(param_1 + 0x8c),*(undefined4 *)(*(int *)(*piVar7 + 0x5c) + 0x1c),
                   *(undefined4 *)(param_1 + 0x28),0);
        if (*(int *)(param_1 + 0x8c) == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        UnityEngine_MaterialPropertyBlock__SetFloat_35c4024
                  (*(int *)(param_1 + 0x8c),*(undefined4 *)(*(int *)(*piVar7 + 0x5c) + 0x20),
                   *(undefined4 *)(param_1 + 0x2c),0);
        uVar4 = 0x3f800000;
        if (*(char *)(param_1 + 0x30) == '\0') {
          uVar4 = uVar1;
        }
        if (*(int *)(param_1 + 0x8c) == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        UnityEngine_MaterialPropertyBlock__SetFloat_35c4024
                  (*(int *)(param_1 + 0x8c),*(undefined4 *)(*(int *)(*piVar7 + 0x5c) + 0x24),uVar4,0
                  );
        iVar3 = *piVar7;
        iVar10 = *piVar14;
        if (*(int *)(iVar3 + 0x74) == 0) {
          FUN_00ec3934();
          iVar3 = *piVar7;
        }
        puVar11 = (undefined4 *)(param_1 + 0x38);
        puVar6 = (undefined4 *)(param_1 + 0x34);
        switch(iVar9) {
        case 1:
          puVar11 = (undefined4 *)(param_1 + 0x48);
          puVar6 = (undefined4 *)(param_1 + 0x44);
          break;
        case 2:
          puVar11 = (undefined4 *)(param_1 + 0x58);
          puVar6 = (undefined4 *)(param_1 + 0x54);
          break;
        case 3:
          puVar11 = (undefined4 *)(param_1 + 0x68);
          puVar6 = (undefined4 *)(param_1 + 100);
        }
        if (iVar10 == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        UnityEngine_MaterialPropertyBlock__SetColor_35c40d0
                  (iVar10,*(undefined4 *)(*(int *)(iVar3 + 0x5c) + 0x28),*puVar6,*puVar11);
        if (iStack_44 == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        UnityEngine_Renderer__SetPropertyBlock_35c5100(iStack_44,*piVar14,0);
        puVar11 = *(undefined4 **)(_UNK_0107c93c + 0x107c8e8);
        if (*piVar14 == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        UnityEngine_MaterialPropertyBlock__Clear_35c3a70(*piVar14,0);
      }
    }
    uVar13 = uVar13 + 1;
  } while( true );
}


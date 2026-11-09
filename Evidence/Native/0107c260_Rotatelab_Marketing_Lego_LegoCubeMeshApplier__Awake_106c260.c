/* IL2CPP: Rotatelab.Marketing.Lego.LegoCubeMeshApplier$$Awake
void Rotatelab_Marketing_Lego_LegoCubeMeshApplier__Awake (Rotatelab_Marketing_Lego_LegoCubeMeshApplier_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Marketing.Lego.LegoCubeMeshApplier$$Awake
   void Rotatelab_Marketing_Lego_LegoCubeMeshApplier__Awake
   (Rotatelab_Marketing_Lego_LegoCubeMeshApplier_o* __this, const MethodInfo* method); */

void Rotatelab_Marketing_Lego_LegoCubeMeshApplier__Awake_106c260(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  int *piVar7;
  char *pcVar8;
  int iVar9;
  int iVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  byte bVar13;
  uint uVar14;
  int *piVar15;
  uint in_fpscr;
  int iStack_44;
  
  Rotatelab_Marketing_Lego_LegoCubeMeshApplier__InitializeVariantColors_106c278();
  pcVar8 = (char *)(_UNK_0107c910 + 0x107c310);
  if (*pcVar8 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0107c914 + 0x107c324));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0107c918 + 0x107c330));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0107c91c + 0x107c33c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0107c920 + 0x107c348));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0107c924 + 0x107c354));
    *pcVar8 = '\x01';
  }
  piVar15 = (int *)(param_1 + 0x8c);
  iStack_44 = 0;
  if (*piVar15 == 0) {
    iVar2 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_0107c928 + 0x107c380));
    UnityEngine_MaterialPropertyBlock___ctor_35c3c50(iVar2,0);
    *piVar15 = iVar2;
    thunk_FUN_00ec5080(piVar15,iVar2);
  }
  iVar2 = UnityEngine_Component__GetComponentsInChildren_object__143ff14
                    (param_1,1,**(undefined4 **)(_UNK_0107c92c + 0x107c3b0));
  uVar1 = _UNK_0107c84c;
  uVar14 = 0;
  puVar11 = *(undefined4 **)(_UNK_0107c930 + 0x107c478);
  do {
    if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if ((int)*(uint *)(iVar2 + 0xc) <= (int)uVar14) {
      return;
    }
    if (*(uint *)(iVar2 + 0xc) <= uVar14) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f07924();
    }
    iVar9 = *(int *)(iVar2 + 0x10 + uVar14 * 4);
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
        bVar13 = 0;
        uVar4 = UnityEngine_Object__get_name_36081bc(iVar9,0);
        iVar9 = Rotatelab_Marketing_Lego_LegoCubeMeshApplier__GetVariantIndex_106cc7c
                          (param_1,uVar4,uVar14);
        if (*(char *)(param_1 + 0x14) != '\0') {
          bVar13 = *(byte *)(param_1 + 0x30) ^ 1;
        }
        piVar7 = *(int **)(_UNK_0107c938 + 0x107c588);
        if (iStack_44 == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        UnityEngine_Renderer__GetPropertyBlock_35c5108(iStack_44,*piVar15,0);
        iVar3 = *piVar7;
        iVar10 = *piVar15;
        if (*(int *)(iVar3 + 0x74) == 0) {
          FUN_00ec3934();
          iVar3 = *piVar7;
        }
        uVar4 = 0x3f800000;
        if (bVar13 == 0) {
          uVar4 = uVar1;
        }
        if (iVar10 == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        UnityEngine_MaterialPropertyBlock__SetFloat_35c4024
                  (iVar10,*(undefined4 *)(*(int *)(iVar3 + 0x5c) + 4),uVar4,0);
        iVar3 = *piVar7;
        iVar10 = *piVar15;
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
        iVar10 = *piVar15;
        if (*(int *)(iVar3 + 0x74) == 0) {
          FUN_00ec3934();
          iVar3 = *piVar7;
        }
        puVar11 = (undefined4 *)(param_1 + 0x40);
        puVar5 = (undefined4 *)(param_1 + 0x38);
        puVar6 = (undefined4 *)(param_1 + 0x34);
        puVar12 = (undefined4 *)(param_1 + 0x3c);
        switch(iVar9) {
        case 1:
          puVar11 = (undefined4 *)(param_1 + 0x50);
          puVar5 = (undefined4 *)(param_1 + 0x48);
          puVar6 = (undefined4 *)(param_1 + 0x44);
          puVar12 = (undefined4 *)(param_1 + 0x4c);
          break;
        case 2:
          puVar11 = (undefined4 *)(param_1 + 0x60);
          puVar5 = (undefined4 *)(param_1 + 0x58);
          puVar6 = (undefined4 *)(param_1 + 0x54);
          puVar12 = (undefined4 *)(param_1 + 0x5c);
          break;
        case 3:
          puVar11 = (undefined4 *)(param_1 + 0x70);
          puVar5 = (undefined4 *)(param_1 + 0x68);
          puVar6 = (undefined4 *)(param_1 + 100);
          puVar12 = (undefined4 *)(param_1 + 0x6c);
        }
        if (iVar10 == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        UnityEngine_MaterialPropertyBlock__SetColor_35c40d0
                  (iVar10,*(undefined4 *)(*(int *)(iVar3 + 0x5c) + 0x28),*puVar6,*puVar5,*puVar12,
                   *puVar11,0);
        if (iStack_44 == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        UnityEngine_Renderer__SetPropertyBlock_35c5100(iStack_44,*piVar15,0);
        puVar11 = *(undefined4 **)(_UNK_0107c93c + 0x107c8e8);
        if (*piVar15 == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        UnityEngine_MaterialPropertyBlock__Clear_35c3a70(*piVar15,0);
      }
    }
    uVar14 = uVar14 + 1;
  } while( true );
}


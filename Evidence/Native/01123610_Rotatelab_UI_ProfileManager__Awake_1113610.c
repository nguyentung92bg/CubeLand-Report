/* IL2CPP: Rotatelab.UI.ProfileManager$$Awake
void Rotatelab_UI_ProfileManager__Awake (Rotatelab_UI_ProfileManager_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.UI.ProfileManager$$Awake
   void Rotatelab_UI_ProfileManager__Awake (Rotatelab_UI_ProfileManager_o* __this, const MethodInfo*
   method); */

void Rotatelab_UI_ProfileManager__Awake_1113610(int param_1)

{
  bool bVar1;
  uint *puVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  undefined4 *puVar8;
  char *pcVar9;
  int *piVar10;
  undefined4 uVar11;
  int *piVar12;
  uint uVar13;
  
  pcVar9 = (char *)(_UNK_01123aac + 0x1123628);
  if (*pcVar9 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01123ab0 + 0x112363c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01123ab4 + 0x1123648));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01123ab8 + 0x1123654));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01123abc + 0x1123660));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01123ac0 + 0x112366c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01123ac4 + 0x1123678));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01123ac8 + 0x1123684));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01123acc + 0x1123690));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01123ad0 + 0x112369c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01123ad4 + 0x11236a8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01123ad8 + 0x11236b4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01123adc + 0x11236c0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01123ae0 + 0x11236cc));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01123ae4 + 0x11236d8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01123ae8 + 0x11236e4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01123aec + 0x11236f0));
    *pcVar9 = '\x01';
  }
  Rotatelab_SingletonBehaviour_object___Awake_1a999f0
            (param_1,**(undefined4 **)(_UNK_01123af0 + 0x1123704));
  if (*(int *)(param_1 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar3 = FUN_00ec388c(**(undefined4 **)(_UNK_01123af4 + 0x1123728),
                       *(undefined4 *)(*(int *)(param_1 + 0x28) + 0xc));
  piVar12 = (int *)(param_1 + 0x24);
  *piVar12 = iVar3;
  thunk_FUN_00ec5080(piVar12,iVar3);
  uVar13 = 0;
  iVar3 = 0x10;
  while( true ) {
    if (*piVar12 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (*(int *)(*piVar12 + 0xc) <= (int)uVar13) {
      Rotatelab_UI_ProfileManager__LoadAvatarFromNakama_1113b40(param_1);
      if (*(int *)(param_1 + 0x38) == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      iVar3 = *(int *)(*(int *)(param_1 + 0x38) + 0xb4);
      uVar5 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_01123b10 + 0x112391c));
      UnityEngine_Events_UnityAction___ctor_361afc4
                (uVar5,param_1,**(undefined4 **)(_UNK_01123b14 + 0x112393c),0);
      if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      UnityEngine_Events_UnityEvent__AddListener_361b098(iVar3,uVar5,0);
      if (*(int *)(param_1 + 0x3c) == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      iVar3 = *(int *)(*(int *)(param_1 + 0x3c) + 0xb4);
      uVar5 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_01123b18 + 0x112397c));
      UnityEngine_Events_UnityAction___ctor_361afc4
                (uVar5,param_1,**(undefined4 **)(_UNK_01123b1c + 0x112399c),0);
      if (iVar3 != 0) {
        UnityEngine_Events_UnityEvent__AddListener_361b098(iVar3,uVar5,0);
        if (*(int *)(param_1 + 0x34) == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        iVar3 = *(int *)(*(int *)(param_1 + 0x34) + 0xb4);
        uVar5 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_01123b20 + 0x11239dc));
        UnityEngine_Events_UnityAction___ctor_361afc4
                  (uVar5,param_1,**(undefined4 **)(_UNK_01123b24 + 0x11239fc),0);
        if (iVar3 != 0) {
          UnityEngine_Events_UnityEvent__AddListener_361b098(iVar3,uVar5,0);
          piVar12 = *(int **)(_UNK_01123b28 + 0x1123a2c);
          iVar3 = *piVar12;
          if (*(int *)(iVar3 + 0x74) == 0) {
            FUN_00ec3934();
            iVar3 = *piVar12;
          }
          uVar11 = *(undefined4 *)(*(int *)(iVar3 + 0x5c) + 0x120);
          uVar5 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_01123b2c + 0x1123a50));
          System_Action_Int32Enum__bool____ctor_1f185a4
                    (uVar5,param_1,**(undefined4 **)(_UNK_01123b30 + 0x1123a70),0);
          uVar5 = Rotatelab_GameAction_Int32Enum__bool___op_Addition_23a438c
                            (uVar11,uVar5,**(undefined4 **)(_UNK_01123b34 + 0x1123a88));
          puVar8 = (undefined4 *)(*(int *)(*piVar12 + 0x5c) + 0x120);
          *puVar8 = uVar5;
          if (*(int *)(_UNK_00f30580 + 0xf30540) != 0) {
            puVar2 = (uint *)(_UNK_00f30584 + ((uint)puVar8 >> 0x11) * 4 + 0xf547cc);
            do {
              bVar1 = (bool)hasExclusiveAccess(puVar2);
            } while (!bVar1);
            *puVar2 = *puVar2 | 1 << (((uint)puVar8 & 0x1ffff) >> 0xc);
            return;
          }
          return;
        }
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar4 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_01123af8 + 0x1123774));
    System_Object___ctor_2bb93bc(iVar4,0);
    if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    *(int *)(iVar4 + 0xc) = param_1;
    thunk_FUN_00ec5080((int *)(iVar4 + 0xc),param_1);
    if (*(int *)(param_1 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    uVar5 = System_Collections_Generic_List_object___get_Item_267d814
                      (*(int *)(param_1 + 0x28),uVar13,**(undefined4 **)(_UNK_01123afc + 0x11237c0))
    ;
    *(undefined4 *)(iVar4 + 8) = uVar5;
    thunk_FUN_00ec5080();
    uVar5 = *(undefined4 *)(param_1 + 0x1c);
    uVar11 = *(undefined4 *)(param_1 + 0x20);
    piVar10 = *(int **)(param_1 + 0x24);
    if (*(int *)(**(int **)(_UNK_01123b00 + 0x11237e4) + 0x74) == 0) {
      FUN_00ec3934();
    }
    iVar6 = UnityEngine_Object__Instantiate_object__14d4e4c
                      (uVar5,uVar11,0,**(undefined4 **)(_UNK_01123b04 + 0x1123814));
    if (piVar10 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if ((iVar6 != 0) &&
       (iVar7 = thunk_FUN_00f00bc8(iVar6,*(undefined4 *)(*piVar10 + 0x20)), iVar7 == 0)) {
      uVar5 = thunk_FUN_00f08b98();
      func_0x00ec3920(uVar5,0);
    }
    if ((uint)piVar10[3] <= uVar13) break;
    *(int *)((int)piVar10 + iVar3) = iVar6;
    thunk_FUN_00ec5080((int *)((int)piVar10 + iVar3),iVar6);
    iVar6 = *piVar12;
    if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (*(uint *)(iVar6 + 0xc) <= uVar13) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f07924();
    }
    iVar6 = *(int *)(iVar6 + iVar3);
    uVar11 = *(undefined4 *)(iVar4 + 8);
    uVar5 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_01123b08 + 0x11238a4));
    UnityEngine_Events_UnityAction___ctor_361afc4
              (uVar5,iVar4,**(undefined4 **)(_UNK_01123b0c + 0x11238c8),0);
    if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    Rotatelab_UI_ProfileAvatarButton__Initialize_1113388(iVar6,uVar11,uVar5);
    iVar3 = iVar3 + 4;
    uVar13 = uVar13 + 1;
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00f07924();
}


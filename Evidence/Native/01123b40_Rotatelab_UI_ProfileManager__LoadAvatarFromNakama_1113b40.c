/* IL2CPP: Rotatelab.UI.ProfileManager$$LoadAvatarFromNakama
void Rotatelab_UI_ProfileManager__LoadAvatarFromNakama (Rotatelab_UI_ProfileManager_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.UI.ProfileManager$$LoadAvatarFromNakama
   void Rotatelab_UI_ProfileManager__LoadAvatarFromNakama (Rotatelab_UI_ProfileManager_o* __this,
   const MethodInfo* method); */

void Rotatelab_UI_ProfileManager__LoadAvatarFromNakama_1113b40(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  uint uVar6;
  int *piVar7;
  char *pcVar8;
  undefined4 *puVar9;
  int *piVar10;
  undefined4 uVar11;
  undefined4 uStack_28;
  
  pcVar8 = (char *)(_UNK_01123ec4 + 0x1123b58);
  if (*pcVar8 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01123ec8 + 0x1123b6c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01123ecc + 0x1123b78));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01123ed0 + 0x1123b84));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01123ed4 + 0x1123b90));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01123ed8 + 0x1123b9c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01123edc + 0x1123ba8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01123ee0 + 0x1123bb4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01123ee4 + 0x1123bc0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01123ee8 + 0x1123bcc));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01123eec + 0x1123bd8));
    *pcVar8 = '\x01';
  }
  uStack_28 = 0;
  if (*(int *)(param_1 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar1 = System_Collections_Generic_List_object___get_Item_267d814
                    (*(int *)(param_1 + 0x28),0,**(undefined4 **)(_UNK_01123ef0 + 0x1123c08));
  puVar9 = (undefined4 *)(param_1 + 0x10);
  *puVar9 = uVar1;
  thunk_FUN_00ec5080(puVar9,uVar1);
  iVar2 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                    (**(undefined4 **)(_UNK_01123ef4 + 0x1123c30));
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (*(int *)(iVar2 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  piVar10 = *(int **)(*(int *)(iVar2 + 0x20) + 0x1c);
  iVar2 = 0;
  if (piVar10 != (int *)0x0) {
    iVar3 = *piVar10;
    uVar6 = (uint)*(ushort *)(iVar3 + 0xb6);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(int *)(iVar3 + 0x58) + 4);
      do {
        if (piVar7[-1] == **(int **)(_UNK_01123ef8 + 0x1123c74)) {
          puVar4 = (undefined4 *)(iVar3 + *piVar7 * 8 + 0xc0);
          goto LAB_01123cbc;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 2;
      } while (uVar6 != 0);
    }
    puVar4 = (undefined4 *)FUN_00efdb38(piVar10,**(int **)(_UNK_01123ef8 + 0x1123c74),0);
LAB_01123cbc:
    piVar10 = (int *)(*(code *)*puVar4)(piVar10,puVar4[1]);
    if (piVar10 != (int *)0x0) {
      iVar2 = *piVar10;
      uVar6 = (uint)*(ushort *)(iVar2 + 0xb6);
      if (uVar6 != 0) {
        piVar7 = (int *)(*(int *)(iVar2 + 0x58) + 4);
        do {
          if (piVar7[-1] == **(int **)(_UNK_01123efc + 0x1123ce8)) {
            puVar4 = (undefined4 *)(iVar2 + *piVar7 * 8 + 0xc0);
            goto LAB_01123d30;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 2;
        } while (uVar6 != 0);
      }
      puVar4 = (undefined4 *)FUN_00efdb38(piVar10,**(int **)(_UNK_01123efc + 0x1123ce8),0);
LAB_01123d30:
      iVar2 = (*(code *)*puVar4)(piVar10,puVar4[1]);
    }
  }
  iVar3 = System_String__IsNullOrEmpty_2a0a844(iVar2,0);
  if (iVar3 == 0) {
    piVar10 = *(int **)(_UNK_01123f00 + 0x1123d64);
    if (*(int *)(*piVar10 + 0x74) == 0) {
      FUN_00ec3934();
    }
    iVar3 = Rotatelab_Extensions__StartsWithIgnoreCase_fc1958
                      (iVar2,**(undefined4 **)(_UNK_01123f04 + 0x1123d84),0);
    if (iVar3 != 0) {
      uVar1 = *(undefined4 *)(param_1 + 0x28);
      if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      iVar2 = System_String__Substring_2a0fbc8(iVar2,3,0);
      if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      uVar5 = System_String__Trim_2a100f4(iVar2,0);
      piVar7 = *(int **)(_UNK_01123f08 + 0x1123de0);
      iVar2 = *piVar7;
      if (*(int *)(iVar2 + 0x74) == 0) {
        FUN_00ec3934();
        iVar2 = *piVar7;
      }
      puVar4 = *(undefined4 **)(iVar2 + 0x5c);
      iVar3 = puVar4[4];
      if (iVar3 == 0) {
        if (*(int *)(iVar2 + 0x74) == 0) {
          FUN_00ec3934();
          puVar4 = *(undefined4 **)(*piVar7 + 0x5c);
        }
        uVar11 = *puVar4;
        iVar3 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_01123f0c + 0x1123e28));
        System_Func_object__object__bool____ctor_239ea98
                  (iVar3,uVar11,**(undefined4 **)(_UNK_01123f10 + 0x1123e48),0);
        piVar7 = (int *)(*(int *)(*piVar7 + 0x5c) + 0x10);
        *piVar7 = iVar3;
        thunk_FUN_00ec5080(piVar7,iVar3);
      }
      if (*(int *)(*piVar10 + 0x74) == 0) {
        FUN_00ec3934();
      }
      iVar2 = Rotatelab_Extensions__TryFind_object__object__1489c5c
                        (uVar1,uVar5,iVar3,&uStack_28,**(undefined4 **)(_UNK_01123f14 + 0x1123e90));
      if (iVar2 != 0) {
        *puVar9 = uStack_28;
        thunk_FUN_00ec5080(puVar9);
      }
    }
  }
  Rotatelab_UI_ProfileManager__Refresh_1114308(param_1);
  return;
}


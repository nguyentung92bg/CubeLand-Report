/* IL2CPP: Rotatelab.Boosters.CannonBoosterController$$HasValidTargets
bool Rotatelab_Boosters_CannonBoosterController__HasValidTargets (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Boosters.CannonBoosterController$$HasValidTargets
   bool Rotatelab_Boosters_CannonBoosterController__HasValidTargets (const MethodInfo* method); */

undefined4 Rotatelab_Boosters_CannonBoosterController__HasValidTargets_11350a0(void)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  undefined4 *puVar6;
  uint uVar7;
  int *piVar8;
  char *pcVar9;
  int iVar10;
  undefined4 *puVar11;
  int *piVar12;
  int iVar13;
  int *piVar14;
  int iVar15;
  
  pcVar9 = (char *)(_UNK_011452c8 + 0x11450b4);
  if (*pcVar9 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_011452cc + 0x11450c8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_011452d0 + 0x11450d4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_011452d4 + 0x11450e0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_011452d8 + 0x11450ec));
    FUN_00ec37c0(*(undefined4 *)(_UNK_011452dc + 0x11450f8));
    *pcVar9 = '\x01';
  }
  puVar11 = *(undefined4 **)(_UNK_011452e0 + 0x114510c);
  uVar1 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858(*puVar11);
  piVar12 = *(int **)(_UNK_011452e4 + 0x1145120);
  if (*(int *)(*piVar12 + 0x74) == 0) {
    FUN_00ec3934();
  }
  iVar2 = UnityEngine_Object__op_Equality_36033f4(uVar1,0,0);
  if (iVar2 == 0) {
    iVar2 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858(*puVar11);
    if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar2 = *(int *)(iVar2 + 0x58);
    if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar13 = *(int *)(iVar2 + 0xc);
    if (0 < iVar13) {
      iVar10 = 0;
      puVar11 = *(undefined4 **)(_UNK_011452e8 + 0x1145190);
      piVar14 = *(int **)(_UNK_011452ec + 0x1145198);
      do {
        if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        piVar3 = (int *)System_Collections_Generic_List_object___get_Item_267d814
                                  (iVar2,iVar10,*puVar11);
        if (*(int *)(*piVar12 + 0x74) == 0) {
          FUN_00ec3934();
        }
        iVar4 = UnityEngine_Object__op_Equality_36033f4(piVar3,0,0);
        if (iVar4 == 0) {
          if (piVar3 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
            thunk_FUN_00f078d4();
          }
          if (((char)piVar3[6] == '\0') &&
             (piVar5 = (int *)thunk_FUN_00f00bc8(piVar3,*piVar14), piVar5 != (int *)0x0)) {
            iVar15 = *piVar5;
            iVar4 = *piVar14;
            uVar7 = (uint)*(ushort *)(iVar15 + 0xb6);
            if (uVar7 != 0) {
              piVar8 = (int *)(*(int *)(iVar15 + 0x58) + 4);
              do {
                if (piVar8[-1] == iVar4) {
                  puVar6 = (undefined4 *)(iVar15 + *piVar8 * 8 + 0xc0);
                  goto LAB_01145270;
                }
                uVar7 = uVar7 - 1;
                piVar8 = piVar8 + 2;
              } while (uVar7 != 0);
            }
            puVar6 = (undefined4 *)FUN_00efdb38(piVar5,iVar4,0);
LAB_01145270:
            iVar4 = (*(code *)*puVar6)(piVar5,puVar6[1]);
            if (iVar4 != 0) {
              if (piVar3 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
                thunk_FUN_00f078d4();
              }
              iVar4 = (**(code **)(*piVar3 + 0xf0))(piVar3,*(undefined4 *)(*piVar3 + 0xf4));
              if (iVar4 != 0) {
                return 1;
              }
            }
          }
        }
        iVar10 = iVar10 + 1;
      } while (iVar10 != iVar13);
    }
  }
  return 0;
}


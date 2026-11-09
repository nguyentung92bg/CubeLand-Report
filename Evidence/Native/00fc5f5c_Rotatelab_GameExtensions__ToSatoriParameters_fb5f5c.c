/* IL2CPP: Rotatelab.GameExtensions$$ToSatoriParameters
System_Collections_Generic_Dictionary_string__object__o* Rotatelab_GameExtensions__ToSatoriParameters (System_Collections_Generic_IList_Parameter__o* firebaseParameters, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x00fc6340) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.GameExtensions$$ToSatoriParameters
   System_Collections_Generic_Dictionary_string__object__o*
   Rotatelab_GameExtensions__ToSatoriParameters (System_Collections_Generic_IList_Parameter__o*
   firebaseParameters, const MethodInfo* method); */

int Rotatelab_GameExtensions__ToSatoriParameters_fb5f5c(int *param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  uint uVar9;
  int *piVar10;
  int *piVar11;
  char *pcVar12;
  int *piVar13;
  int *piVar14;
  int **ppiVar15;
  int *piStack_28;
  
  pcVar12 = (char *)(_UNK_00fc63a4 + 0xfc5f74);
  if (*pcVar12 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fc63a8 + 0xfc5f88));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fc63ac + 0xfc5f94));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fc63b0 + 0xfc5fa0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fc63b4 + 0xfc5fac));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fc63b8 + 0xfc5fb8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fc63bc + 0xfc5fc4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fc63c0 + 0xfc5fd0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fc63c4 + 0xfc5fdc));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fc63c8 + 0xfc5fe8));
    *pcVar12 = '\x01';
  }
  piStack_28 = (int *)0x0;
  if (param_1 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar2 = *param_1;
  uVar9 = (uint)*(ushort *)(iVar2 + 0xb6);
  if (uVar9 != 0) {
    piVar10 = (int *)(*(int *)(iVar2 + 0x58) + 4);
    do {
      if (piVar10[-1] == **(int **)(_UNK_00fc63cc + 0xfc6014)) {
        puVar3 = (undefined4 *)(iVar2 + *piVar10 * 8 + 0xc0);
        goto LAB_00fc605c;
      }
      uVar9 = uVar9 - 1;
      piVar10 = piVar10 + 2;
    } while (uVar9 != 0);
  }
  puVar3 = (undefined4 *)FUN_00efdb38(param_1,**(int **)(_UNK_00fc63cc + 0xfc6014),0);
LAB_00fc605c:
  uVar4 = (*(code *)*puVar3)(param_1,puVar3[1]);
  iVar2 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_00fc63d0 + 0xfc607c));
  System_Collections_Generic_Dictionary_object__object____ctor_206890c
            (iVar2,uVar4,**(undefined4 **)(_UNK_00fc63d4 + 0xfc6094));
  iVar5 = *param_1;
  uVar9 = (uint)*(ushort *)(iVar5 + 0xb6);
  if (uVar9 != 0) {
    piVar10 = (int *)(*(int *)(iVar5 + 0x58) + 4);
    do {
      if (piVar10[-1] == **(int **)(_UNK_00fc63d8 + 0xfc60ac)) {
        puVar3 = (undefined4 *)(iVar5 + *piVar10 * 8 + 0xc0);
        goto LAB_00fc60f4;
      }
      uVar9 = uVar9 - 1;
      piVar10 = piVar10 + 2;
    } while (uVar9 != 0);
  }
  puVar3 = (undefined4 *)FUN_00efdb38(param_1,**(int **)(_UNK_00fc63d8 + 0xfc60ac),0);
LAB_00fc60f4:
  piStack_28 = (int *)(*(code *)*puVar3)(param_1,puVar3[1]);
  ppiVar15 = &piStack_28;
  uVar4 = 0;
  piVar14 = *(int **)(_UNK_00fc63dc + 0xfc6124);
  piVar13 = *(int **)(_UNK_00fc63e0 + 0xfc612c);
  piVar10 = *(int **)(_UNK_00fc63e4 + 0xfc6134);
  puVar3 = *(undefined4 **)(_UNK_00fc63e8 + 0xfc613c);
  do {
    piVar1 = piStack_28;
    if (piStack_28 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar5 = *piStack_28;
    uVar9 = (uint)*(ushort *)(iVar5 + 0xb6);
    if (uVar9 != 0) {
      piVar11 = (int *)(*(int *)(iVar5 + 0x58) + 4);
      do {
        if (piVar11[-1] == *piVar14) {
          puVar6 = (undefined4 *)(iVar5 + *piVar11 * 8 + 0xc0);
          goto LAB_00fc6198;
        }
        uVar9 = uVar9 - 1;
        piVar11 = piVar11 + 2;
      } while (uVar9 != 0);
    }
    puVar6 = (undefined4 *)FUN_00efdb38(piStack_28,*piVar14,0);
LAB_00fc6198:
    iVar5 = (*(code *)*puVar6)(piVar1,puVar6[1],(code *)*puVar6,puVar6[1],uVar4,ppiVar15);
    piVar1 = piStack_28;
    if (iVar5 == 0) {
      if (piStack_28 == (int *)0x0) {
        return iVar2;
      }
      iVar5 = *piStack_28;
      uVar9 = (uint)*(ushort *)(iVar5 + 0xb6);
      if (uVar9 == 0) goto LAB_00fc630c;
      piVar10 = (int *)(*(int *)(iVar5 + 0x58) + 4);
      break;
    }
    if (piStack_28 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar5 = *piStack_28;
    uVar9 = (uint)*(ushort *)(iVar5 + 0xb6);
    if (uVar9 != 0) {
      piVar11 = (int *)(*(int *)(iVar5 + 0x58) + 4);
      do {
        if (piVar11[-1] == *piVar13) {
          puVar6 = (undefined4 *)(iVar5 + *piVar11 * 8 + 0xc0);
          goto LAB_00fc6210;
        }
        uVar9 = uVar9 - 1;
        piVar11 = piVar11 + 2;
      } while (uVar9 != 0);
    }
    puVar6 = (undefined4 *)FUN_00efdb38(piStack_28,*piVar13,0);
LAB_00fc6210:
    uVar7 = (*(code *)*puVar6)(piVar1,puVar6[1]);
    iVar5 = *piVar10;
    if (*(int *)(iVar5 + 0x74) == 0) {
      FUN_00ec3934();
      iVar5 = *piVar10;
    }
    iVar5 = *(int *)(*(int *)(iVar5 + 0x5c) + 0xc);
    if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    uVar8 = (**(code **)(iVar5 + 0xc))
                      (*(undefined4 *)(iVar5 + 0x20),uVar7,*(undefined4 *)(iVar5 + 0x14));
    iVar5 = *(int *)(*(int *)(*piVar10 + 0x5c) + 0x10);
    if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    uVar7 = (**(code **)(iVar5 + 0xc))
                      (*(undefined4 *)(iVar5 + 0x20),uVar7,*(undefined4 *)(iVar5 + 0x14));
    if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    System_Collections_Generic_Dictionary_object__object___set_Item_2069314
              (iVar2,uVar8,uVar7,*puVar3);
  } while( true );
  while( true ) {
    uVar9 = uVar9 - 1;
    piVar10 = piVar10 + 2;
    if (uVar9 == 0) break;
    if (piVar10[-1] == **(int **)(_UNK_00fc63ec + 0xfc62e0)) {
      puVar3 = (undefined4 *)(iVar5 + *piVar10 * 8 + 0xc0);
      goto LAB_00fc6328;
    }
  }
LAB_00fc630c:
  puVar3 = (undefined4 *)FUN_00efdb38(piStack_28,**(int **)(_UNK_00fc63ec + 0xfc62e0),0);
LAB_00fc6328:
  (*(code *)*puVar3)(piVar1,puVar3[1]);
  return iVar2;
}


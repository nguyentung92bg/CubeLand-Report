/* IL2CPP: Rotatelab.Extensions$$ConvertAllValues<object, object, long>
System_Collections_Generic_Dictionary_TKey__TOutputValue__o* Rotatelab_Extensions__ConvertAllValues_object__object__long_ (System_Collections_Generic_IDictionary_TKey__TInputValue__o* dictionary, Rotatelab_Extensions_DictionaryValueConverter_TKey__TInputValue__TOutputValue__o* converter, const MethodInfo_14853E4* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x01495784) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Extensions$$ConvertAllValues<object, object, long>
   System_Collections_Generic_Dictionary_TKey__TOutputValue__o*
   Rotatelab_Extensions__ConvertAllValues_object__object__long_
   (System_Collections_Generic_IDictionary_TKey__TInputValue__o* dictionary,
   Rotatelab_Extensions_DictionaryValueConverter_TKey__TInputValue__TOutputValue__o* converter,
   const MethodInfo_14853E4* method); */

int Rotatelab_Extensions__ConvertAllValues_object__object__long__14853e4
              (int *param_1,int param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int *piVar8;
  int *piVar9;
  undefined8 uVar10;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  int **ppiStack_2c;
  int *piStack_28;
  
  if (*(int *)(param_3 + 0x1c) == 0) {
    FUN_00ec37c0(*(undefined4 *)(_UNK_014957dc + 0x1495410));
    FUN_00ec37c0(*(undefined4 *)(_UNK_014957e0 + 0x149541c));
    if (*(int *)(param_3 + 0x1c) == 0) {
      FUN_00efd7c4(param_3);
    }
  }
  piStack_28 = (int *)0x0;
  if (param_1 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar6 = *(int *)(*(int *)(param_3 + 0x1c) + 4);
  if ((*(ushort *)(iVar6 + 0xbd) & 1) == 0) {
    iVar6 = FUN_00efd768(iVar6);
  }
  iVar2 = *param_1;
  uVar7 = (uint)*(ushort *)(iVar2 + 0xb6);
  if (uVar7 != 0) {
    piVar8 = (int *)(*(int *)(iVar2 + 0x58) + 4);
    do {
      if (piVar8[-1] == iVar6) {
        puVar3 = (undefined4 *)(iVar2 + *piVar8 * 8 + 0xc0);
        goto LAB_014954b0;
      }
      uVar7 = uVar7 - 1;
      piVar8 = piVar8 + 2;
    } while (uVar7 != 0);
  }
  puVar3 = (undefined4 *)FUN_00efdb38(param_1,iVar6,0);
LAB_014954b0:
  uVar4 = (*(code *)*puVar3)(param_1,puVar3[1]);
  if ((*(ushort *)(*(int *)(*(int *)(param_3 + 0x1c) + 0xc) + 0xbd) & 1) == 0) {
    FUN_00efd768();
  }
  iVar6 = thunk_FUN_00f00cdc();
  System_Collections_Generic_Dictionary_object__long____ctor_2061348
            (iVar6,uVar4,*(undefined4 *)(*(int *)(param_3 + 0x1c) + 0x10));
  iVar2 = *(int *)(*(int *)(param_3 + 0x1c) + 0x14);
  if ((*(ushort *)(iVar2 + 0xbd) & 1) == 0) {
    iVar2 = FUN_00efd768(iVar2);
  }
  iVar5 = *param_1;
  uVar7 = (uint)*(ushort *)(iVar5 + 0xb6);
  if (uVar7 != 0) {
    piVar8 = (int *)(*(int *)(iVar5 + 0x58) + 4);
    do {
      if (piVar8[-1] == iVar2) {
        puVar3 = (undefined4 *)(iVar5 + *piVar8 * 8 + 0xc0);
        goto LAB_01495564;
      }
      uVar7 = uVar7 - 1;
      piVar8 = piVar8 + 2;
    } while (uVar7 != 0);
  }
  puVar3 = (undefined4 *)FUN_00efdb38(param_1,iVar2,0);
LAB_01495564:
  piStack_28 = (int *)(*(code *)*puVar3)(param_1,puVar3[1]);
  ppiStack_2c = &piStack_28;
  uStack_30 = 0;
  piVar8 = *(int **)(_UNK_014957e4 + 0x1495598);
  do {
    piVar1 = piStack_28;
    if (piStack_28 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar2 = *piStack_28;
    uVar7 = (uint)*(ushort *)(iVar2 + 0xb6);
    if (uVar7 != 0) {
      piVar9 = (int *)(*(int *)(iVar2 + 0x58) + 4);
      do {
        if (piVar9[-1] == *piVar8) {
          puVar3 = (undefined4 *)(iVar2 + *piVar9 * 8 + 0xc0);
          goto LAB_014955f4;
        }
        uVar7 = uVar7 - 1;
        piVar9 = piVar9 + 2;
      } while (uVar7 != 0);
    }
    puVar3 = (undefined4 *)FUN_00efdb38(piStack_28,*piVar8,0);
LAB_014955f4:
    iVar2 = (*(code *)*puVar3)(piVar1,puVar3[1]);
    piVar1 = piStack_28;
    if (iVar2 == 0) {
      if (piStack_28 == (int *)0x0) {
        return iVar6;
      }
      iVar2 = *piStack_28;
      uVar7 = (uint)*(ushort *)(iVar2 + 0xb6);
      if (uVar7 == 0) goto LAB_01495750;
      piVar8 = (int *)(*(int *)(iVar2 + 0x58) + 4);
      break;
    }
    if (piStack_28 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar2 = *(int *)(*(int *)(param_3 + 0x1c) + 0x1c);
    if ((*(ushort *)(iVar2 + 0xbd) & 1) == 0) {
      iVar2 = FUN_00efd768(iVar2);
    }
    iVar5 = *piVar1;
    uVar7 = (uint)*(ushort *)(iVar5 + 0xb6);
    if (uVar7 != 0) {
      piVar9 = (int *)(*(int *)(iVar5 + 0x58) + 4);
      do {
        if (piVar9[-1] == iVar2) {
          puVar3 = (undefined4 *)(iVar5 + *piVar9 * 8 + 0xc0);
          goto LAB_01495688;
        }
        uVar7 = uVar7 - 1;
        piVar9 = piVar9 + 2;
      } while (uVar7 != 0);
    }
    puVar3 = (undefined4 *)FUN_00efdb38(piVar1,iVar2,0);
LAB_01495688:
    (*(code *)*puVar3)(&uStack_38,piVar1,puVar3[1]);
    uVar4 = uStack_38;
    if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    uVar10 = (**(code **)(param_2 + 0xc))
                       (*(undefined4 *)(param_2 + 0x20),uStack_38,uStack_34,
                        *(undefined4 *)(param_2 + 0x14));
    if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    System_Collections_Generic_Dictionary_object__long___set_Item_2061d6c
              (iVar6,uVar4,(int)uVar10,(int)((ulonglong)uVar10 >> 0x20),
               *(undefined4 *)(*(int *)(param_3 + 0x1c) + 0x48));
  } while( true );
  while( true ) {
    uVar7 = uVar7 - 1;
    piVar8 = piVar8 + 2;
    if (uVar7 == 0) break;
    if (piVar8[-1] == **(int **)(_UNK_014957e8 + 0x1495724)) {
      puVar3 = (undefined4 *)(iVar2 + *piVar8 * 8 + 0xc0);
      goto LAB_0149576c;
    }
  }
LAB_01495750:
  puVar3 = (undefined4 *)FUN_00efdb38(piStack_28,**(int **)(_UNK_014957e8 + 0x1495724),0);
LAB_0149576c:
  (*(code *)*puVar3)(piVar1,puVar3[1]);
  return iVar6;
}


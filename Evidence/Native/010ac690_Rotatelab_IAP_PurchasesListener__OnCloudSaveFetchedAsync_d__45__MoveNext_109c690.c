/* IL2CPP: Rotatelab.IAP.PurchasesListener.<OnCloudSaveFetchedAsync>d__45$$MoveNext
void Rotatelab_IAP_PurchasesListener__OnCloudSaveFetchedAsync_d__45__MoveNext (Rotatelab_IAP_PurchasesListener__OnCloudSaveFetchedAsync_d__45_o __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x010acb54) */
/* WARNING: Removing unreachable block (ram,0x010acc0c) */
/* WARNING: Removing unreachable block (ram,0x010acc18) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.IAP.PurchasesListener.<OnCloudSaveFetchedAsync>d__45$$MoveNext
   void Rotatelab_IAP_PurchasesListener__OnCloudSaveFetchedAsync_d__45__MoveNext
   (Rotatelab_IAP_PurchasesListener__OnCloudSaveFetchedAsync_d__45_o __this, const MethodInfo*
   method); */

void Rotatelab_IAP_PurchasesListener__OnCloudSaveFetchedAsync_d__45__MoveNext_109c690(uint *param_1)

{
  uint *puVar1;
  double dVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  uint uVar6;
  char *pcVar7;
  int *piVar8;
  int *piVar9;
  uint *puVar10;
  int iVar11;
  uint uVar12;
  int *piStack_a0;
  uint *puStack_9c;
  undefined8 *puStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_70;
  int iStack_6c;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined4 uStack_48;
  undefined4 uStack_44;
  int *piStack_40;
  uint *puStack_3c;
  uint uStack_34;
  
  pcVar7 = (char *)(_UNK_010ace70 + 0x10ac6b0);
  if (*pcVar7 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010ace74 + 0x10ac6c4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010ace78 + 0x10ac6d0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010ace7c + 0x10ac6dc));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010ace80 + 0x10ac6e8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010ace84 + 0x10ac6f4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010ace88 + 0x10ac700));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010ace8c + 0x10ac70c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010ace90 + 0x10ac718));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010ace94 + 0x10ac724));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010ace98 + 0x10ac730));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010ace9c + 0x10ac73c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010acea0 + 0x10ac748));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010acea4 + 0x10ac754));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010acea8 + 0x10ac760));
    *pcVar7 = '\x01';
  }
  uVar12 = param_1[3];
  uStack_68 = 0;
  uStack_60 = 0.0;
  uStack_48 = 0;
  uStack_34 = *param_1;
  puStack_3c = (uint *)0x0;
  piStack_40 = (int *)0x0;
  uStack_44 = 0;
  iStack_6c = 0;
  uStack_70 = 0;
  uStack_58 = uStack_68;
  uStack_50 = uStack_60;
  if (uStack_34 == 0) {
    piVar8 = (int *)param_1[4];
    puVar10 = (uint *)param_1[5];
    *param_1 = 0xffffffff;
    param_1[4] = 0;
    param_1[5] = 0;
    uStack_34 = 0xffffffff;
    piStack_40 = piVar8;
    puStack_3c = puVar10;
LAB_010aca18:
    pcVar7 = (char *)(_UNK_010acee0 + 0x10aca24);
    if (*pcVar7 == '\0') {
      FUN_00ec37c0(*(undefined4 *)(_UNK_010acee4 + 0x10aca38));
      *pcVar7 = '\x01';
    }
    if (piVar8 != (int *)0x0) {
      iVar3 = *piVar8;
      uVar6 = (uint)*(ushort *)(iVar3 + 0xb6);
      if (uVar6 != 0) {
        piVar9 = (int *)(*(int *)(iVar3 + 0x58) + 4);
        do {
          if (piVar9[-1] == **(int **)(_UNK_010acee8 + 0x10aca58)) {
            puVar5 = (undefined4 *)(iVar3 + *piVar9 * 8 + 0xd0);
            goto LAB_010acaa0;
          }
          uVar6 = uVar6 - 1;
          piVar9 = piVar9 + 2;
        } while (uVar6 != 0);
      }
      puVar5 = (undefined4 *)FUN_00efdb38(piVar8,**(int **)(_UNK_010acee8 + 0x10aca58),2);
LAB_010acaa0:
      (*(code *)*puVar5)(piVar8,(int)(short)puVar10,puVar5[1]);
    }
    if (uVar12 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
LAB_010acac8:
    if (*(int *)(uVar12 + 0x3c) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    Rotatelab_Save_SavedList_ValueTuple_object__double__object____GetEnumerator_1a89d98
              (&piStack_a0,*(int *)(uVar12 + 0x3c),**(undefined4 **)(_UNK_010aceec + 0x10acae8));
    uStack_68 = CONCAT44(puStack_9c,piStack_a0);
    uStack_60 = (double)CONCAT44(uStack_94,puStack_98);
    uStack_58 = CONCAT44(uStack_8c,uStack_90);
    uStack_50 = (double)CONCAT44(uStack_84,uStack_88);
    uStack_48 = uStack_80;
    uStack_44 = uStack_7c;
    piStack_a0 = (int *)0x0;
    puVar5 = *(undefined4 **)(_UNK_010acef0 + 0x10acb30);
    puStack_9c = &uStack_34;
    puStack_98 = &uStack_68;
    while (iVar3 = System_Collections_Generic_List_Enumerator_ValueTuple_object__double__object____MoveNext_214b514
                             (&uStack_68,*puVar5), dVar2 = uStack_50, iVar3 != 0) {
      iVar3 = Rotatelab_IAP_PurchasesListener__TryFindIapObject_10985b4
                        (uVar12,(undefined4)uStack_58,uStack_48,&iStack_6c);
      if (iVar3 != 0) {
        if (iStack_6c == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        piVar8 = *(int **)(iStack_6c + 0x10);
        if (piVar8 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        (**(code **)(*piVar8 + 0xe8))(piVar8,1,*(undefined4 *)(*piVar8 + 0xec));
      }
      iVar3 = Rotatelab_Networking_CloudSaveData__get_Instance_1140b84(0);
      if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      *(double *)(iVar3 + 200) = dVar2 + *(double *)(iVar3 + 200);
    }
    if (0x7fffffff < uStack_34) {
      System_Collections_Generic_List_Enumerator_ValueTuple_object__double__object____Dispose_214b510
                (puStack_98,**(undefined4 **)(_UNK_010acef4 + 0x10acbfc));
    }
    iVar3 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                      (**(undefined4 **)(_UNK_010acef8 + 0x10acc2c));
    if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    Rotatelab_Networking_CloudSaveManager__SaveToLocal_11427dc(iVar3,0);
  }
  else if ((char)param_1[2] != '\0') {
    if (uVar12 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (*(int *)(uVar12 + 0x3c) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar3 = Rotatelab_Save_SavedList_ValueTuple_object__double__object____get_Count_1a89960
                      (*(int *)(uVar12 + 0x3c),**(undefined4 **)(_UNK_010aceac + 0x10ac7e4));
    if (iVar3 < 1) goto LAB_010acc58;
    uVar4 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                      (**(undefined4 **)(_UNK_010aceb0 + 0x10ac800));
    if (*(int *)(**(int **)(_UNK_010aceb4 + 0x10ac814) + 0x74) == 0) {
      FUN_00ec3934();
    }
    iVar3 = UnityEngine_Object__op_Equality_36033f4(uVar4,0,0);
    if (iVar3 != 0) {
      piVar8 = *(int **)(_UNK_010aceb8 + 0x10ac84c);
      iVar3 = *piVar8;
      if (*(int *)(iVar3 + 0x74) == 0) {
        FUN_00ec3934();
        iVar3 = *piVar8;
      }
      puVar5 = *(undefined4 **)(iVar3 + 0x5c);
      iVar11 = puVar5[3];
      if (iVar11 == 0) {
        if (*(int *)(iVar3 + 0x74) == 0) {
          FUN_00ec3934();
          puVar5 = *(undefined4 **)(*piVar8 + 0x5c);
        }
        uVar4 = *puVar5;
        iVar11 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_010acebc + 0x10ac898));
        System_Func_bool____ctor_23938dc
                  (iVar11,uVar4,**(undefined4 **)(_UNK_010acec0 + 0x10ac8ac),0);
        piVar8 = (int *)(*(int *)(*piVar8 + 0x5c) + 0xc);
        *piVar8 = iVar11;
        thunk_FUN_00ec5080(piVar8,iVar11);
      }
      piVar9 = *(int **)(_UNK_010acec4 + 0x10ac8dc);
      if (*(int *)(*piVar9 + 0x74) == 0) {
        FUN_00ec3934();
      }
      Cysharp_Threading_Tasks_UniTask__WaitUntil_3217d44(&piStack_a0,iVar11,0xd,0,0,0);
      thunk_FUN_00ec5080(&piStack_a0,0);
      puVar1 = puStack_9c;
      piVar8 = piStack_a0;
      pcVar7 = (char *)(_UNK_010acec8 + 0x10ac938);
      puStack_3c = puStack_9c;
      piStack_40 = piStack_a0;
      if (*pcVar7 == '\0') {
        FUN_00ec37c0(*(undefined4 *)(_UNK_010acecc + 0x10ac958));
        *pcVar7 = '\x01';
      }
      if (*(int *)(*piVar9 + 0x74) == 0) {
        FUN_00ec3934();
      }
      pcVar7 = (char *)(_UNK_010aced0 + 0x10ac980);
      if (*pcVar7 == '\0') {
        FUN_00ec37c0(*(undefined4 *)(_UNK_010aced4 + 0x10ac994));
        *pcVar7 = '\x01';
      }
      puVar10 = (uint *)(int)(short)puVar1;
      if (piVar8 == (int *)0x0) {
        piVar8 = (int *)0x0;
      }
      else {
        iVar3 = *piVar8;
        uVar6 = (uint)*(ushort *)(iVar3 + 0xb6);
        if (uVar6 != 0) {
          piVar9 = (int *)(*(int *)(iVar3 + 0x58) + 4);
          do {
            if (piVar9[-1] == **(int **)(_UNK_010aced8 + 0x10ac9b8)) {
              puVar5 = (undefined4 *)(iVar3 + *piVar9 * 8 + 0xc0);
              goto LAB_010accbc;
            }
            uVar6 = uVar6 - 1;
            piVar9 = piVar9 + 2;
          } while (uVar6 != 0);
        }
        puVar5 = (undefined4 *)FUN_00efdb38(piVar8,**(int **)(_UNK_010aced8 + 0x10ac9b8),0);
LAB_010accbc:
        iVar3 = (*(code *)*puVar5)(piVar8,puVar10,puVar5[1]);
        if (iVar3 == 0) {
          param_1[5] = (uint)puVar1;
          *param_1 = 0;
          uStack_34 = 0;
          param_1[4] = (uint)piVar8;
          thunk_FUN_00ec5080(param_1 + 4,0);
          func_0x010bd59c(param_1 + 1,&piStack_40,param_1,
                          **(undefined4 **)(_UNK_010acedc + 0x10acd08));
          return;
        }
      }
      goto LAB_010aca18;
    }
    goto LAB_010acac8;
  }
  if (uVar12 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
LAB_010acc58:
  if (*(int *)(uVar12 + 0x3c) != 0) {
    Rotatelab_Save_SavedList_ValueTuple_object__double__object____Clear_1a89d14
              (*(int *)(uVar12 + 0x3c),1,**(undefined4 **)(_UNK_010acefc + 0x10acc74));
    *param_1 = 0xfffffffe;
    func_0x00fcef34(param_1 + 1,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00f078d4();
}


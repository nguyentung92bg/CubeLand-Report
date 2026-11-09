/* IL2CPP: Rotatelab.RemoteConfigManager$$Start
void Rotatelab_RemoteConfigManager__Start (Rotatelab_RemoteConfigManager_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.RemoteConfigManager$$Start
   void Rotatelab_RemoteConfigManager__Start (Rotatelab_RemoteConfigManager_o* __this, const
   MethodInfo* method); */

void Rotatelab_RemoteConfigManager__Start_10740f8(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  char *pcVar6;
  int *piVar7;
  int iVar8;
  undefined4 uVar9;
  int iVar10;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  pcVar6 = (char *)(_UNK_010843f4 + 0x1084110);
  if (*pcVar6 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010843f8 + 0x1084124));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010843fc + 0x1084130));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01084400 + 0x108413c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01084404 + 0x1084148));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01084408 + 0x1084154));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0108440c + 0x1084160));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01084410 + 0x108416c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01084414 + 0x1084178));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01084418 + 0x1084184));
    *pcVar6 = '\x01';
  }
  iVar1 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                    (**(undefined4 **)(_UNK_0108441c + 0x1084198));
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  Rotatelab_Ads_AdManager__get_IsEnabled_10f5748(iVar1,0);
  Rotatelab_RemoteConfigManager__InitializeAsync_1074448(&uStack_28,param_1);
  Cysharp_Threading_Tasks_UniTaskExtensions__Forget_bool__16500f4
            (uStack_28,uStack_24,**(undefined4 **)(_UNK_01084420 + 0x10841d4));
  iVar1 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                    (**(undefined4 **)(_UNK_01084424 + 0x10841e4));
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (*(int *)(iVar1 + 0x24) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  piVar7 = *(int **)(*(int *)(iVar1 + 0x24) + 0x18);
  if (piVar7 != (int *)0x0) {
    iVar1 = *piVar7;
    uVar4 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar5[-1] == **(int **)(_UNK_01084428 + 0x1084224)) {
          puVar2 = (undefined4 *)(iVar1 + *piVar5 * 8 + 0xc0);
          goto LAB_0108426c;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 2;
      } while (uVar4 != 0);
    }
    puVar2 = (undefined4 *)FUN_00efdb38(piVar7,**(int **)(_UNK_01084428 + 0x1084224),0);
LAB_0108426c:
    iVar1 = (*(code *)*puVar2)(piVar7,puVar2[1]);
    if (iVar1 != 0) {
      piVar7 = *(int **)(_UNK_0108442c + 0x1084294);
      iVar3 = *piVar7;
      if (*(int *)(iVar3 + 0x74) == 0) {
        FUN_00ec3934();
        iVar3 = *piVar7;
      }
      puVar2 = *(undefined4 **)(iVar3 + 0x5c);
      iVar8 = puVar2[1];
      if (iVar8 == 0) {
        if (*(int *)(iVar3 + 0x74) == 0) {
          FUN_00ec3934();
          puVar2 = *(undefined4 **)(*piVar7 + 0x5c);
        }
        uVar9 = *puVar2;
        iVar8 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_01084430 + 0x10842dc));
        System_Func_object__object____ctor_239b630
                  (iVar8,uVar9,**(undefined4 **)(_UNK_01084434 + 0x10842fc),0);
        piVar5 = (int *)(*(int *)(*piVar7 + 0x5c) + 4);
        *piVar5 = iVar8;
        thunk_FUN_00ec5080(piVar5,iVar8);
        iVar3 = *piVar7;
      }
      if (*(int *)(iVar3 + 0x74) == 0) {
        FUN_00ec3934();
        iVar3 = *piVar7;
      }
      puVar2 = *(undefined4 **)(iVar3 + 0x5c);
      iVar10 = puVar2[2];
      if (iVar10 == 0) {
        if (*(int *)(iVar3 + 0x74) == 0) {
          FUN_00ec3934();
          puVar2 = *(undefined4 **)(*piVar7 + 0x5c);
        }
        uVar9 = *puVar2;
        iVar10 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_01084438 + 0x1084364));
        System_Func_object__object____ctor_239b630
                  (iVar10,uVar9,**(undefined4 **)(_UNK_0108443c + 0x1084384),0);
        piVar7 = (int *)(*(int *)(*piVar7 + 0x5c) + 8);
        *piVar7 = iVar10;
        thunk_FUN_00ec5080(piVar7,iVar10);
      }
      uVar9 = System_Linq_Enumerable__ToDictionary_object__object__object__1477274
                        (iVar1,iVar8,iVar10,**(undefined4 **)(_UNK_01084440 + 0x10843b4));
      if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      *(undefined4 *)(param_1 + 0x14) = uVar9;
      thunk_FUN_00ec5080((undefined4 *)(param_1 + 0x14),uVar9);
      pcVar6 = (char *)(_UNK_010846b4 + 0x108456c);
      if (*pcVar6 == '\0') {
        FUN_00ec37c0(*(undefined4 *)(_UNK_010846b8 + 0x1084580));
        FUN_00ec37c0(*(undefined4 *)(_UNK_010846bc + 0x108458c));
        FUN_00ec37c0(*(undefined4 *)(_UNK_010846c0 + 0x1084598));
        FUN_00ec37c0(*(undefined4 *)(_UNK_010846c4 + 0x10845a4));
        *pcVar6 = '\x01';
      }
      uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
      iVar1 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
      uStack_28 = 0;
      if (*(int *)(param_1 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      System_Collections_Generic_List_object___GetEnumerator_267e7a4
                (&uStack_28,*(int *)(param_1 + 0x18),**(undefined4 **)(_UNK_010846c8 + 0x10845d8));
      puVar2 = *(undefined4 **)(_UNK_010846cc + 0x10845f8);
      while( true ) {
        iVar3 = System_Collections_Generic_List_Enumerator_object___MoveNext_2190720
                          (&uStack_28,*puVar2);
        if (iVar3 == 0) {
          System_Collections_Generic_List_Enumerator_object___Dispose_219071c
                    (&uStack_28,**(undefined4 **)(_UNK_010846d0 + 0x1084634));
          iVar1 = *(int *)(param_1 + 0x98);
          if (iVar1 != 0) {
            (**(code **)(iVar1 + 0xc))(*(undefined4 *)(iVar1 + 0x20),*(undefined4 *)(iVar1 + 0x14));
          }
          return;
        }
        if (iVar1 == 0) break;
        Rotatelab_Networking_SatoriObjectFlag__RefreshValue_fe8af8(iVar1,0);
      }
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
  }
  return;
}


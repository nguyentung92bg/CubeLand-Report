/* IL2CPP: Rotatelab.Scripts.RoundedMeshGenerator$$NormalizeOccupancy
System_Collections_Generic_HashSet_Vector3Int__o* Rotatelab_Scripts_RoundedMeshGenerator__NormalizeOccupancy (System_Collections_Generic_HashSet_Vector3Int__o* occupancy, UnityEngine_Vector3Int_o min, UnityEngine_Vector3Int_o* max, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.RoundedMeshGenerator$$NormalizeOccupancy
   System_Collections_Generic_HashSet_Vector3Int__o*
   Rotatelab_Scripts_RoundedMeshGenerator__NormalizeOccupancy
   (System_Collections_Generic_HashSet_Vector3Int__o* occupancy, UnityEngine_Vector3Int_o min,
   UnityEngine_Vector3Int_o* max, const MethodInfo* method); */

int Rotatelab_Scripts_RoundedMeshGenerator__NormalizeOccupancy_101d460
              (int param_1,int param_2,int param_3,int param_4,int *param_5)

{
  int iVar1;
  undefined8 *puVar2;
  int iVar3;
  char *pcVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  undefined8 uVar10;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  int iStack_34;
  int iStack_30;
  int iStack_2c;
  
  pcVar4 = (char *)(_UNK_0102d6cc + 0x102d484);
  if (*pcVar4 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0102d6d0 + 0x102d498));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0102d6d4 + 0x102d4a4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0102d6d8 + 0x102d4b0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0102d6dc + 0x102d4bc));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0102d6e0 + 0x102d4c8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0102d6e4 + 0x102d4d4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0102d6e8 + 0x102d4e0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0102d6ec + 0x102d4ec));
    *pcVar4 = '\x01';
  }
  uStack_3c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_38 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  iStack_34 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  iStack_2c = 0;
  uStack_40 = 0;
  iStack_30 = 0;
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar5 = *(undefined4 *)(param_1 + 0x10);
  iVar1 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_0102d6f0 + 0x102d528));
  System_Collections_Generic_HashSet_Vector3Int____ctor_242bffc
            (iVar1,uVar5,**(undefined4 **)(_UNK_0102d6f4 + 0x102d544));
  pcVar4 = (char *)(_UNK_0102d6f8 + 0x102d558);
  if (*pcVar4 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0102d6fc + 0x102d56c));
    *pcVar4 = '\x01';
  }
  puVar2 = *(undefined8 **)(**(int **)(_UNK_0102d700 + 0x102d588) + 0x5c);
  uVar10 = *puVar2;
  param_5[2] = *(int *)(puVar2 + 1);
  *(undefined8 *)param_5 = uVar10;
  System_Collections_Generic_HashSet_Vector3Int___GetEnumerator_242cd5c
            (&uStack_40,param_1,**(undefined4 **)(_UNK_0102d704 + 0x102d5a8));
  puVar8 = *(undefined4 **)(_UNK_0102d708 + 0x102d5c8);
  puVar9 = *(undefined4 **)(_UNK_0102d70c + 0x102d5d0);
  while( true ) {
    iVar3 = System_Collections_Generic_HashSet_Enumerator_Vector3Int___MoveNext_21af904
                      (&uStack_40,*puVar8);
    if (iVar3 == 0) {
      System_Collections_Generic_HashSet_Enumerator_Vector3Int___Dispose_21af900
                (&uStack_40,**(undefined4 **)(_UNK_0102d710 + 0x102d660));
      return iVar1;
    }
    if (iVar1 == 0) break;
    iVar7 = iStack_34 - param_2;
    iVar3 = iStack_2c - param_4;
    iVar6 = iStack_30 - param_3;
    System_Collections_Generic_HashSet_Vector3Int___Add_242d4ac(iVar1,iVar7,iVar6,iVar3,*puVar9);
    if (iVar3 < param_5[2]) {
      iVar3 = param_5[2];
    }
    param_5[2] = iVar3;
    if (iVar6 < param_5[1]) {
      iVar6 = param_5[1];
    }
    if (iVar7 < *param_5) {
      iVar7 = *param_5;
    }
    param_5[1] = iVar6;
    *param_5 = iVar7;
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00f078d4();
}


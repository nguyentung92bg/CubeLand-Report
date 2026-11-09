/* IL2CPP: Rotatelab.Scripts.RoundedMeshGenerator$$CountExposedFaces
int32_t Rotatelab_Scripts_RoundedMeshGenerator__CountExposedFaces (System_Collections_Generic_Dictionary_Vector3Int__byte__o* exposedFaceMasks, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.RoundedMeshGenerator$$CountExposedFaces
   int32_t Rotatelab_Scripts_RoundedMeshGenerator__CountExposedFaces
   (System_Collections_Generic_Dictionary_Vector3Int__byte__o* exposedFaceMasks, const MethodInfo*
   method); */

int Rotatelab_Scripts_RoundedMeshGenerator__CountExposedFaces_1022a10(int param_1)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  char *pcVar5;
  uint uVar6;
  undefined4 *puVar7;
  int *piVar8;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  pcVar5 = (char *)(_UNK_01032bb8 + 0x1032a28);
  if (*pcVar5 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01032bbc + 0x1032a3c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01032bc0 + 0x1032a48));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01032bc4 + 0x1032a54));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01032bc8 + 0x1032a60));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01032bcc + 0x1032a6c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01032bd0 + 0x1032a78));
    *pcVar5 = '\x01';
  }
  uStack_44 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_40 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_3c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_48 = 0;
  uStack_38 = 0;
  uStack_34 = uStack_44;
  uStack_30 = uStack_40;
  uStack_2c = uStack_3c;
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  System_Collections_Generic_Dictionary_Vector3Int__byte___GetEnumerator_20b57b8
            (&uStack_48,param_1,**(undefined4 **)(_UNK_01032bd4 + 0x1032ab0));
  iVar4 = 0;
  puVar7 = *(undefined4 **)(_UNK_01032bd8 + 0x1032ad4);
  piVar8 = *(int **)(_UNK_01032bdc + 0x1032adc);
  do {
    iVar2 = System_Collections_Generic_Dictionary_Enumerator_Vector3Int__byte___MoveNext_21f34d0
                      (&uStack_48,*puVar7);
    if (iVar2 == 0) {
      System_Collections_Generic_Dictionary_Enumerator_Vector3Int__byte___Dispose_21f362c
                (&uStack_48,**(undefined4 **)(_UNK_01032be0 + 0x1032b4c));
      return iVar4;
    }
    bVar1 = (byte)uStack_30;
    uVar6 = 0;
    while( true ) {
      iVar2 = *piVar8;
      if (*(int *)(iVar2 + 0x74) == 0) {
        FUN_00ec3934();
        iVar2 = *piVar8;
      }
      iVar2 = *(int *)(*(int *)(iVar2 + 0x5c) + 4);
      if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      if (*(int *)(iVar2 + 0xc) <= (int)uVar6) break;
      uVar3 = uVar6 & 0x1f;
      uVar6 = uVar6 + 1;
      iVar4 = (bVar1 >> uVar3 & 1) + iVar4;
    }
  } while( true );
}


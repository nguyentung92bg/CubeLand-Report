/* IL2CPP: Rotatelab.RemoteConfigManager$$OnSatoriFlagsRefreshedSuccessfully
void Rotatelab_RemoteConfigManager__OnSatoriFlagsRefreshedSuccessfully (Rotatelab_RemoteConfigManager_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.RemoteConfigManager$$OnSatoriFlagsRefreshedSuccessfully
   void Rotatelab_RemoteConfigManager__OnSatoriFlagsRefreshedSuccessfully
   (Rotatelab_RemoteConfigManager_o* __this, const MethodInfo* method); */

void Rotatelab_RemoteConfigManager__OnSatoriFlagsRefreshedSuccessfully_1074554(int param_1)

{
  int iVar1;
  undefined4 extraout_r3;
  char *pcVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  int iStack_1c;
  
  pcVar2 = (char *)(_UNK_010846b4 + 0x108456c);
  if (*pcVar2 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010846b8 + 0x1084580));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010846bc + 0x108458c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010846c0 + 0x1084598));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010846c4 + 0x10845a4));
    *pcVar2 = '\x01';
  }
  uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_20 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  iStack_1c = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_28 = 0;
  if (*(int *)(param_1 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  System_Collections_Generic_List_object___GetEnumerator_267e7a4
            (&uStack_28,*(int *)(param_1 + 0x18),**(undefined4 **)(_UNK_010846c8 + 0x10845d8));
  uVar4 = 0;
  puVar3 = *(undefined4 **)(_UNK_010846cc + 0x10845f8);
  puVar5 = &uStack_28;
  while( true ) {
    iVar1 = System_Collections_Generic_List_Enumerator_object___MoveNext_2190720(&uStack_28,*puVar3)
    ;
    if (iVar1 == 0) {
      System_Collections_Generic_List_Enumerator_object___Dispose_219071c
                (&uStack_28,**(undefined4 **)(_UNK_010846d0 + 0x1084634));
      iVar1 = *(int *)(param_1 + 0x98);
      if (iVar1 != 0) {
        (**(code **)(iVar1 + 0xc))
                  (*(undefined4 *)(iVar1 + 0x20),*(undefined4 *)(iVar1 + 0x14),
                   *(code **)(iVar1 + 0xc),extraout_r3,uVar4,puVar5);
      }
      return;
    }
    if (iStack_1c == 0) break;
    Rotatelab_Networking_SatoriObjectFlag__RefreshValue_fe8af8(iStack_1c,0);
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00f078d4();
}


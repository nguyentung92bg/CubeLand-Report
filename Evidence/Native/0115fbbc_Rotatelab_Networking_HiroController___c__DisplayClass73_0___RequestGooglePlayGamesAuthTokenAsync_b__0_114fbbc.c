/* IL2CPP: Rotatelab.Networking.HiroController.<>c__DisplayClass73_0$$<RequestGooglePlayGamesAuthTokenAsync>b__0
void Rotatelab_Networking_HiroController___c__DisplayClass73_0___RequestGooglePlayGamesAuthTokenAsync_b__0 (Rotatelab_Networking_HiroController___c__DisplayClass73_0_o* __this, System_String_o* authToken, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x01c4e310) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP:
   Rotatelab.Networking.HiroController.<>c__DisplayClass73_0$$<RequestGooglePlayGamesAuthTokenAsync>b__0
   void 
   Rotatelab_Networking_HiroController___c__DisplayClass73_0___RequestGooglePlayGamesAuthTokenAsync_b__0
   (Rotatelab_Networking_HiroController___c__DisplayClass73_0_o* __this, System_String_o* authToken,
   const MethodInfo* method); */

bool Rotatelab_Networking_HiroController___c__DisplayClass73_0___RequestGooglePlayGamesAuthTokenAsync_b__0_114fbbc
               (int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  char *pcVar5;
  int *piVar6;
  int *piVar7;
  undefined4 *puVar8;
  int iStack_68;
  int *piStack_64;
  undefined4 uStack_60;
  int iStack_5c;
  undefined4 uStack_58;
  int iStack_54;
  char *pcStack_50;
  undefined4 *puStack_4c;
  undefined4 uStack_44;
  int iStack_40;
  int *piStack_3c;
  undefined4 uStack_38;
  int iStack_34;
  undefined4 uStack_30;
  char cStack_29;
  undefined4 auStack_28 [4];
  
  pcVar5 = (char *)(_UNK_0115fc1c + 0x115fbd4);
  if (*pcVar5 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0115fc20 + 0x115fbe8));
    *pcVar5 = '\x01';
  }
  iVar4 = *(int *)(param_1 + 8);
  if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar3 = **(undefined4 **)(_UNK_0115fc24 + 0x115fc10);
  if (*(int *)(iVar4 + 0x24) != 0) {
    return false;
  }
  *(undefined4 *)(iVar4 + 0xc) = param_2;
  thunk_FUN_00ec5080((undefined4 *)(iVar4 + 0xc),param_2,uVar3);
  pcVar5 = (char *)(_UNK_01c4e520 + 0x1c4e0a8);
  if (*pcVar5 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01c4e524 + 0x1c4e0bc));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01c4e528 + 0x1c4e0c8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01c4e52c + 0x1c4e0d4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01c4e530 + 0x1c4e0e0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01c4e534 + 0x1c4e0ec));
    *pcVar5 = '\x01';
  }
  piStack_3c = *(int **)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_38 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  iStack_34 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  auStack_28[0] = 0;
  iStack_40 = 0;
  uStack_30 = 0;
  cStack_29 = '\0';
  uStack_44 = 0;
  iVar1 = System_Threading_Interlocked__CompareExchange_2bed378(iVar4 + 0x24,1,0,0);
  if (iVar1 == 0) {
    piVar6 = (int *)(iVar4 + 0x14);
    if (*piVar6 == 0) {
      uVar3 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_01c4e538 + 0x1c4e154));
      System_Object___ctor_2bb93bc(uVar3,0);
      System_Threading_Interlocked__CompareExchange_2bef388(piVar6,uVar3,0,0);
    }
    auStack_28[0] = System_Threading_Thread__VolatileRead_2beb26c(piVar6,0);
    puStack_4c = auStack_28;
    pcStack_50 = &cStack_29;
    cStack_29 = '\0';
    iStack_54 = 0;
    System_Threading_Monitor__Enter_2bdfb90(auStack_28[0],pcStack_50,0);
    piVar6 = (int *)(iVar4 + 0x18);
    iVar2 = *piVar6;
    if (iVar2 != 0) {
      (**(code **)(iVar2 + 0xc))
                (*(undefined4 *)(iVar2 + 0x20),*(undefined4 *)(iVar4 + 0x1c),
                 *(undefined4 *)(iVar2 + 0x14));
    }
    piVar7 = (int *)(iVar4 + 0x20);
    if (*piVar7 != 0) {
      System_Collections_Generic_List_ValueTuple_object__object____GetEnumerator_25b79d4
                (&iStack_68,*piVar7,**(undefined4 **)(_UNK_01c4e53c + 0x1c4e1ec));
      iStack_40 = iStack_68;
      piStack_3c = piStack_64;
      uStack_38 = uStack_60;
      iStack_34 = iStack_5c;
      uStack_30 = uStack_58;
      iStack_68 = 0;
      puVar8 = *(undefined4 **)(_UNK_01c4e540 + 0x1c4e224);
      piStack_64 = &iStack_40;
      while (iVar2 = System_Collections_Generic_List_Enumerator_ValueTuple_object__object____MoveNext_214a494
                               (&iStack_40,*puVar8), iVar2 != 0) {
        if (iStack_34 == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        (**(code **)(iStack_34 + 0xc))
                  (*(undefined4 *)(iStack_34 + 0x20),uStack_30,*(undefined4 *)(iStack_34 + 0x14));
      }
      System_Collections_Generic_List_Enumerator_ValueTuple_object__object____Dispose_214a490
                (piStack_64,**(undefined4 **)(_UNK_01c4e558 + 0x1c4e2f4));
      if (iStack_68 != 0) {
        FUN_00ec3a6c();
      }
    }
    *piVar6 = 0;
    thunk_FUN_00ec5080(piVar6,0);
    *(undefined4 *)(iVar4 + 0x1c) = 0;
    thunk_FUN_00ec5080((undefined4 *)(iVar4 + 0x1c),0);
    *piVar7 = 0;
    thunk_FUN_00ec5080(piVar7,0);
    if (*pcStack_50 != '\0') {
      System_Threading_Monitor__Exit_2be3444(*puStack_4c,0);
    }
    if (iStack_54 != 0) {
      FUN_00ec3a6c();
    }
  }
  return iVar1 == 0;
}


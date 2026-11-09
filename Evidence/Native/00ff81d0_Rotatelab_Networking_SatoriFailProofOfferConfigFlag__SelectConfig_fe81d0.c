/* IL2CPP: Rotatelab.Networking.SatoriFailProofOfferConfigFlag$$SelectConfig
Rotatelab_Networking_SatoriBundleConfigFlag_BundleConfig_o* Rotatelab_Networking_SatoriFailProofOfferConfigFlag__SelectConfig (Rotatelab_Networking_SatoriFailProofOfferConfigFlag_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Networking.SatoriFailProofOfferConfigFlag$$SelectConfig
   Rotatelab_Networking_SatoriBundleConfigFlag_BundleConfig_o*
   Rotatelab_Networking_SatoriFailProofOfferConfigFlag__SelectConfig
   (Rotatelab_Networking_SatoriFailProofOfferConfigFlag_o* __this, const MethodInfo* method); */

undefined4 Rotatelab_Networking_SatoriFailProofOfferConfigFlag__SelectConfig_fe81d0(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  char *pcVar4;
  int iVar5;
  undefined4 *puVar6;
  float fVar7;
  undefined4 uStack_40;
  undefined4 *puStack_3c;
  undefined4 uStack_38;
  int iStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  int iStack_24;
  
  pcVar4 = (char *)(_UNK_00ff842c + 0xff81ec);
  if (*pcVar4 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_00ff8430 + 0xff8200));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00ff8434 + 0xff820c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00ff8438 + 0xff8218));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00ff843c + 0xff8224));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00ff8440 + 0xff8230));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00ff8444 + 0xff823c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00ff8448 + 0xff8248));
    *pcVar4 = '\x01';
  }
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  iStack_24 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_30 = 0;
  iVar1 = Rotatelab_Networking_CloudSaveData__get_Instance_1140b84(0);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  fVar7 = *(float *)(iVar1 + 0xe0);
  if (0.0 < fVar7) {
    if (*(int *)(param_1 + 0x1c) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    System_Collections_Generic_List_object___GetEnumerator_267e7a4
              (&uStack_40,*(int *)(param_1 + 0x1c),**(undefined4 **)(_UNK_00ff844c + 0xff82a8));
    uStack_30 = uStack_40;
    uStack_2c = puStack_3c;
    uStack_28 = uStack_38;
    iStack_24 = iStack_34;
    uStack_40 = 0;
    puVar6 = *(undefined4 **)(_UNK_00ff8450 + 0xff82d0);
    iVar1 = 0;
    puStack_3c = &uStack_30;
    while (iVar2 = iVar1,
          iVar1 = System_Collections_Generic_List_Enumerator_object___MoveNext_2190720
                            (&uStack_30,*puVar6), iVar1 != 0) {
      if (iStack_24 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      iVar1 = iVar2;
      if (((*(float *)(iStack_24 + 8) <= fVar7) && (iVar1 = iStack_24, iVar2 != 0)) &&
         (iVar1 = iVar2, *(float *)(iVar2 + 8) < *(float *)(iStack_24 + 8))) {
        iVar1 = iStack_24;
      }
    }
    iVar1 = System_Collections_Generic_List_Enumerator_object___Dispose_219071c
                      (&uStack_30,**(undefined4 **)(_UNK_00ff8454 + 0xff832c));
    if (iVar2 != 0) {
      iVar5 = *(int *)(iVar2 + 0xc);
      if (iVar5 != 0) {
        iVar1 = *(int *)(iVar5 + 0xc);
      }
      if (iVar5 != 0 && iVar1 != 0) {
        iVar1 = Rotatelab_Networking_CloudSaveData__get_Instance_1140b84(0);
        if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        uVar3 = *(undefined4 *)(iVar1 + 0x3c);
        if (*(int *)(iVar2 + 0xc) != 0) {
          iVar1 = *(int *)(*(int *)(iVar2 + 0xc) + 0xc);
          if (*(int *)(**(int **)(_UNK_00ff845c + 0xff8398) + 0x74) == 0) {
            FUN_00ec3934();
          }
          uVar3 = System_Math__Min_2b6fffc(uVar3,iVar1 + -1,0);
          uVar3 = System_Collections_Generic_List_object___get_Item_267d814
                            (iVar5,uVar3,**(undefined4 **)(_UNK_00ff8460 + 0xff83cc));
          return uVar3;
        }
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
    }
  }
  return *(undefined4 *)(param_1 + 0xc);
}


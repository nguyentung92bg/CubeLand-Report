/* IL2CPP: Rotatelab.Networking.SatoriNoAdsBundleConfigFlag$$SelectConfig
Rotatelab_Networking_SatoriBundleConfigFlag_BundleConfig_o* Rotatelab_Networking_SatoriNoAdsBundleConfigFlag__SelectConfig (Rotatelab_Networking_SatoriNoAdsBundleConfigFlag_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Networking.SatoriNoAdsBundleConfigFlag$$SelectConfig
   Rotatelab_Networking_SatoriBundleConfigFlag_BundleConfig_o*
   Rotatelab_Networking_SatoriNoAdsBundleConfigFlag__SelectConfig
   (Rotatelab_Networking_SatoriNoAdsBundleConfigFlag_o* __this, const MethodInfo* method); */

int Rotatelab_Networking_SatoriNoAdsBundleConfigFlag__SelectConfig_fe8920(int param_1)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  undefined4 *puVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  int iStack_2c;
  
  pcVar3 = (char *)(_UNK_00ff8ac4 + 0xff893c);
  if (*pcVar3 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_00ff8ac8 + 0xff8950));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00ff8acc + 0xff895c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00ff8ad0 + 0xff8968));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00ff8ad4 + 0xff8974));
    *pcVar3 = '\x01';
  }
  uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  iStack_2c = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_38 = 0;
  iVar1 = Rotatelab_Networking_CloudSaveData__get_Instance_1140b84(0);
  if (iVar1 != 0) {
    fVar7 = *(float *)(iVar1 + 0xe0);
    iVar1 = *(int *)(param_1 + 0xc);
    if (0.0 < fVar7) {
      if (*(int *)(param_1 + 0x1c) == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      System_Collections_Generic_List_object___GetEnumerator_267e7a4
                (&uStack_38,*(int *)(param_1 + 0x1c),**(undefined4 **)(_UNK_00ff8ad8 + 0xff89d4));
      puVar4 = *(undefined4 **)(_UNK_00ff8adc + 0xff89f8);
      fVar5 = _UNK_00ff8ac0;
      while (iVar2 = System_Collections_Generic_List_Enumerator_object___MoveNext_2190720
                               (&uStack_38,*puVar4), iVar2 != 0) {
        if (iStack_2c == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        fVar6 = *(float *)(iStack_2c + 0x14);
        if ((fVar6 <= fVar7) && (fVar5 < fVar6)) {
          fVar5 = fVar6;
          iVar1 = iStack_2c;
        }
      }
      System_Collections_Generic_List_Enumerator_object___Dispose_219071c
                (&uStack_38,**(undefined4 **)(_UNK_00ff8ae0 + 0xff8a54));
    }
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00f078d4();
}


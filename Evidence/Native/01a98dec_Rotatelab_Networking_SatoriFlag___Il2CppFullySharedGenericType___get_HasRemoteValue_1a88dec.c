/* IL2CPP: Rotatelab.Networking.SatoriFlag<__Il2CppFullySharedGenericType>$$get_HasRemoteValue
bool Rotatelab_Networking_SatoriFlag___Il2CppFullySharedGenericType___get_HasRemoteValue (Rotatelab_Networking_SatoriFlag_T__o* __this, const MethodInfo_1A88DEC* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Networking.SatoriFlag<__Il2CppFullySharedGenericType>$$get_HasRemoteValue
   bool Rotatelab_Networking_SatoriFlag___Il2CppFullySharedGenericType___get_HasRemoteValue
   (Rotatelab_Networking_SatoriFlag_T__o* __this, const MethodInfo_1A88DEC* method); */

uint Rotatelab_Networking_SatoriFlag___Il2CppFullySharedGenericType___get_HasRemoteValue_1a88dec
               (int param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 extraout_r3;
  undefined4 uVar3;
  undefined4 extraout_r3_00;
  undefined4 unaff_r4;
  undefined4 uVar4;
  undefined4 unaff_r5;
  char *pcVar5;
  undefined4 unaff_r11;
  undefined4 unaff_lr;
  
  pcVar5 = (char *)(_UNK_01a98e54 + 0x1a98e00);
  if (*pcVar5 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01a98e58 + 0x1a98e14));
    *pcVar5 = '\x01';
  }
  iVar1 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                    (**(undefined4 **)(_UNK_01a98e5c + 0x1a98e28));
  uVar4 = *(undefined4 *)(param_1 + 8);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  pcVar5 = (char *)(_UNK_01084f18 + 0x1084ed0);
  uVar3 = extraout_r3_00;
  if (*pcVar5 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01084f1c + 0x1084ee4),uVar4,0,extraout_r3_00,unaff_r4,unaff_r5
                );
    *pcVar5 = '\x01';
    uVar3 = extraout_r3;
  }
  if (*(int *)(iVar1 + 0x14) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar2 = System_Collections_Generic_Dictionary_object__object___FindEntry_2069b38
                    (*(int *)(iVar1 + 0x14),uVar4,
                     *(undefined4 *)
                      (*(int *)(*(int *)(**(int **)(_UNK_01084f20 + 0x1084f0c) + 0x10) + 0x60) +
                      0x78),uVar3,unaff_r11,unaff_lr);
  return ~uVar2 >> 0x1f;
}


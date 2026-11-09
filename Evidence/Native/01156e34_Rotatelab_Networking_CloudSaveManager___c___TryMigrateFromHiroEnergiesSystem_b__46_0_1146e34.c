/* IL2CPP: Rotatelab.Networking.CloudSaveManager.<>c$$<TryMigrateFromHiroEnergiesSystem>b__46_0
bool Rotatelab_Networking_CloudSaveManager___c___TryMigrateFromHiroEnergiesSystem_b__46_0 (Rotatelab_Networking_CloudSaveManager___c_o* __this, Hiro_EnergyModifier_o* e, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Networking.CloudSaveManager.<>c$$<TryMigrateFromHiroEnergiesSystem>b__46_0
   bool Rotatelab_Networking_CloudSaveManager___c___TryMigrateFromHiroEnergiesSystem_b__46_0
   (Rotatelab_Networking_CloudSaveManager___c_o* __this, Hiro_EnergyModifier_o* e, const MethodInfo*
   method); */

undefined4
Rotatelab_Networking_CloudSaveManager___c___TryMigrateFromHiroEnergiesSystem_b__46_0_1146e34
          (undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  char *pcVar4;
  uint uVar5;
  
  pcVar4 = (char *)(_UNK_01156e8c + 0x1156e48);
  if (*pcVar4 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01156e90 + 0x1156e5c));
    *pcVar4 = '\x01';
  }
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar2 = **(int **)(_UNK_01156e94 + 0x1156e80);
  iVar1 = *(int *)(param_2 + 8);
  if (iVar1 == iVar2) {
    uVar3 = 1;
  }
  else {
    uVar3 = 0;
    if ((iVar1 != 0 && iVar2 != 0) && (uVar5 = *(uint *)(iVar1 + 8), uVar5 == *(uint *)(iVar2 + 8)))
    {
      uVar3 = System_SpanHelpers__SequenceEqual_2b865c4
                        (iVar1 + 0xc,iVar2 + 0xc,uVar5 << 1,
                         ((int)uVar5 >> 0x1f) << 1 | uVar5 >> 0x1f,0);
      return uVar3;
    }
  }
  return uVar3;
}


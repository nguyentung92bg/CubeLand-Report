/* IL2CPP: Rotatelab.Networking.SatoriMidGameLeaderboardConfigFlag$$IsPirateDay
bool Rotatelab_Networking_SatoriMidGameLeaderboardConfigFlag__IsPirateDay (Rotatelab_Networking_SatoriMidGameLeaderboardConfigFlag_o* __this, int32_t day, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Networking.SatoriMidGameLeaderboardConfigFlag$$IsPirateDay
   bool Rotatelab_Networking_SatoriMidGameLeaderboardConfigFlag__IsPirateDay
   (Rotatelab_Networking_SatoriMidGameLeaderboardConfigFlag_o* __this, int32_t day, const
   MethodInfo* method); */

bool Rotatelab_Networking_SatoriMidGameLeaderboardConfigFlag__IsPirateDay_fe8658
               (int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  char *pcVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  undefined4 *puVar9;
  int iStack_28;
  
  pcVar4 = (char *)(_UNK_00ff8738 + 0xff8674);
  if (*pcVar4 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_00ff873c + 0xff8688));
    *pcVar4 = '\x01';
  }
  iVar6 = *(int *)(param_1 + 0xc);
  iStack_28 = 0;
  iVar8 = *(int *)(_UNK_00ff8740 + 0xff86b0);
  puVar9 = *(undefined4 **)(_UNK_00ff8744 + 0xff86b8);
  uVar1 = 0;
  do {
    uVar3 = uVar1;
    if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    uVar7 = *(uint *)(iVar6 + 0xc);
    if ((int)uVar7 <= (int)uVar3) break;
    if (uVar7 <= uVar3) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f07924();
    }
    uVar5 = *(undefined4 *)(iVar6 + 0x10 + uVar3 * 4);
    if (*(int *)(*(int *)(iVar8 + 0x4c) + 0x74) == 0) {
      FUN_00ec3934();
    }
    iVar2 = System_Enum__TryParse_Int32Enum__1460f2c(uVar5,1,&iStack_28,*puVar9);
    uVar1 = uVar3 + 1;
  } while ((iVar2 == 0) || (iStack_28 != param_2));
  return (int)uVar3 < (int)uVar7;
}


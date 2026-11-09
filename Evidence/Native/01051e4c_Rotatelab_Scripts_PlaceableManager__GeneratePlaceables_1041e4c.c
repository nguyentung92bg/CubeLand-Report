/* IL2CPP: Rotatelab.Scripts.PlaceableManager$$GeneratePlaceables
void Rotatelab_Scripts_PlaceableManager__GeneratePlaceables (Rotatelab_Scripts_PlaceableManager_o* __this, Rotatelab_BlasterData_array_array* grid, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.PlaceableManager$$GeneratePlaceables
   void Rotatelab_Scripts_PlaceableManager__GeneratePlaceables
   (Rotatelab_Scripts_PlaceableManager_o* __this, Rotatelab_BlasterData_array_array* grid, const
   MethodInfo* method); */

void Rotatelab_Scripts_PlaceableManager__GeneratePlaceables_1041e4c(int param_1,int param_2)

{
  float fVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint in_fpscr;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined4 uStack_64;
  
  uVar6 = 0;
  *(undefined4 *)(param_1 + 0xb0) = 0;
  fVar1 = _UNK_010520e0;
  do {
    if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if ((int)*(uint *)(param_2 + 0xc) <= (int)uVar6) {
      return;
    }
    if (*(uint *)(param_2 + 0xc) <= uVar6) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f07924();
    }
    uVar5 = 0;
    iVar7 = *(int *)(param_2 + uVar6 * 4 + 0x10);
    fVar10 = (float)VectorSignedToFloat(uVar6,(byte)(in_fpscr >> 0x16) & 3);
    while( true ) {
      if (iVar7 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      if ((int)*(uint *)(iVar7 + 0xc) <= (int)uVar5) break;
      if (*(uint *)(iVar7 + 0xc) <= uVar5) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f07924();
      }
      iVar4 = *(int *)(iVar7 + 0x10 + uVar5 * 4);
      if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      if (9 < *(uint *)(iVar4 + 0xc)) {
        FUN_00b87610(iVar4);
        uStack_64 = *(undefined4 *)(iVar4 + 0xc);
        uVar2 = thunk_FUN_00f23fd0(*(undefined4 *)(_UNK_010520e4 + 0x105207c));
        uVar2 = FUN_00ec393c(uVar2,&uStack_64);
        uVar3 = thunk_FUN_00f23fd0(*(undefined4 *)(_UNK_010520e8 + 0x1052094));
        uVar2 = System_String__Format_29ffb6c(uVar3,uVar2,0);
        thunk_FUN_00f23fd0(*(undefined4 *)(_UNK_010520ec + 0x10520b0));
        uVar3 = thunk_FUN_00f00cdc();
        System_ArgumentException___ctor_2b113a4(uVar3,uVar2,0);
        uVar2 = thunk_FUN_00f23fd0(*(undefined4 *)(_UNK_010520f0 + 0x10520d0));
        func_0x00ec3920(uVar3,uVar2);
                    /* WARNING: Subroutine does not return */
        FUN_00ec3760();
      }
      fVar9 = *(float *)(param_1 + 0x58) + fVar1;
      fVar8 = (float)VectorSignedToFloat(uVar5,(byte)(in_fpscr >> 0x16) & 3);
      fVar11 = *(float *)(param_1 + 0x54) + *(float *)(param_1 + 0x48) * fVar10;
      fVar8 = *(float *)(param_1 + 0x5c) + *(float *)(param_1 + 0x4c) * fVar8;
      switch(*(uint *)(iVar4 + 0xc)) {
      case 0:
        Rotatelab_Scripts_PlaceableManager__SpawnBlaster_10429b0
                  (param_1,iVar4,fVar11,fVar9,fVar8,uVar6,uVar5);
        break;
      case 1:
        Rotatelab_Scripts_PlaceableManager__SpawnKey_1042a9c
                  (param_1,iVar4,fVar11,fVar9,fVar8,uVar6,uVar5);
        break;
      case 2:
        Rotatelab_Scripts_PlaceableManager__SpawnLock_1042b2c
                  (param_1,iVar4,fVar11,fVar9,fVar8,uVar6,uVar5);
        break;
      case 3:
        Rotatelab_Scripts_PlaceableManager__SpawnScissors_1042bbc
                  (param_1,iVar4,fVar11,fVar9,fVar8,uVar6,uVar5);
        break;
      case 4:
        Rotatelab_Scripts_PlaceableManager__SpawnGenerator_1042c4c
                  (param_1,iVar4,fVar11,fVar9,fVar8,uVar6,uVar5);
        break;
      case 5:
        Rotatelab_Scripts_PlaceableManager__SpawnHammer_1042d20
                  (param_1,iVar4,fVar11,fVar9,fVar8,uVar6,uVar5);
        break;
      case 6:
        Rotatelab_Scripts_PlaceableManager__SpawnSword_1042dd4
                  (param_1,iVar4,fVar11,fVar9,fVar8,uVar6,uVar5);
        break;
      case 7:
        Rotatelab_Scripts_PlaceableManager__SpawnPropeller_1042e64
                  (param_1,iVar4,fVar11,fVar9,fVar8,uVar6,uVar5);
        break;
      case 8:
        Rotatelab_Scripts_PlaceableManager__SpawnStopSign_1042ef4
                  (param_1,iVar4,fVar11,fVar9,fVar8,uVar6,uVar5);
        break;
      case 9:
        Rotatelab_Scripts_PlaceableManager__SpawnMachete_1042fb8
                  (param_1,iVar4,fVar11,fVar9,fVar8,uVar6,uVar5);
      }
      uVar5 = uVar5 + 1;
    }
    uVar6 = uVar6 + 1;
  } while( true );
}


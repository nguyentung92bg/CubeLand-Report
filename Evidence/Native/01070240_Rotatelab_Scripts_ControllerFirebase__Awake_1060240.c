/* IL2CPP: Rotatelab.Scripts.ControllerFirebase$$Awake
void Rotatelab_Scripts_ControllerFirebase__Awake (Rotatelab_Scripts_ControllerFirebase_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.ControllerFirebase$$Awake
   void Rotatelab_Scripts_ControllerFirebase__Awake (Rotatelab_Scripts_ControllerFirebase_o* __this,
   const MethodInfo* method); */

void Rotatelab_Scripts_ControllerFirebase__Awake_1060240(void)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  char *pcVar6;
  int *piVar7;
  
  pcVar6 = (char *)(_UNK_01070368 + 0x1070250);
  if (*pcVar6 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0107036c + 0x1070264));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01070370 + 0x1070270));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01070374 + 0x107027c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01070378 + 0x1070288));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0107037c + 0x1070294));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01070380 + 0x10702a0));
    *pcVar6 = '\x01';
  }
  if (*(int *)(**(int **)(_UNK_01070384 + 0x10702b4) + 0x74) == 0) {
    FUN_00ec3934();
  }
  uVar1 = UnityEngine_Application__get_persistentDataPath_35a750c(0);
  if (*(int *)(**(int **)(_UNK_01070388 + 0x10702dc) + 0x74) == 0) {
    FUN_00ec3934();
  }
  uVar1 = System_IO_Path__Combine_2b3e6c0(uVar1,**(undefined4 **)(_UNK_0107038c + 0x10702fc),0);
  piVar7 = *(int **)(_UNK_01070390 + 0x1070314);
  iVar2 = *piVar7;
  if (*(int *)(iVar2 + 0x74) == 0) {
    FUN_00ec3934();
    iVar2 = *piVar7;
  }
  puVar3 = (undefined4 *)(*(int *)(iVar2 + 0x5c) + 8);
  *puVar3 = uVar1;
  thunk_FUN_00ec5080(puVar3,uVar1);
  if (*(int *)(**(int **)(_UNK_01070394 + 0x1070344) + 0x74) == 0) {
    FUN_00ec3934();
  }
  iVar2 = **(int **)(_UNK_01070398 + 0x1070360);
  iVar4 = *(int *)(iVar2 + 0x1c);
  if (iVar4 == 0) {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0151aa9c + 0x151a944));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0151aaa0 + 0x151a950));
    iVar4 = *(int *)(iVar2 + 0x1c);
    if (iVar4 == 0) {
      FUN_00efd7c4(iVar2);
      iVar4 = *(int *)(iVar2 + 0x1c);
    }
  }
  iVar4 = *(int *)(iVar4 + 4);
  if ((*(ushort *)(iVar4 + 0xbd) & 1) == 0) {
    iVar4 = FUN_00efd768();
  }
  if (*(int *)(iVar4 + 0x74) == 0) {
    FUN_00ec3934();
  }
  iVar4 = *(int *)(*(int *)(iVar2 + 0x1c) + 4);
  if ((*(ushort *)(iVar4 + 0xbd) & 1) == 0) {
    iVar4 = FUN_00efd768();
  }
  iVar4 = *(int *)(*(int *)(iVar4 + 0x5c) + 4);
  if (iVar4 == 0) {
    iVar4 = *(int *)(*(int *)(iVar2 + 0x1c) + 4);
    if ((*(ushort *)(iVar4 + 0xbd) & 1) == 0) {
      iVar4 = FUN_00efd768();
    }
    if (*(int *)(iVar4 + 0x74) == 0) {
      FUN_00ec3934();
    }
    iVar4 = *(int *)(*(int *)(iVar2 + 0x1c) + 4);
    if ((*(ushort *)(iVar4 + 0xbd) & 1) == 0) {
      iVar4 = FUN_00efd768();
    }
    uVar1 = **(undefined4 **)(iVar4 + 0x5c);
    iVar4 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_0151aaa4 + 0x151aa04));
    System_Action___ctor_2b10bac(iVar4,uVar1,*(undefined4 *)(*(int *)(iVar2 + 0x1c) + 8),0);
    iVar5 = *(int *)(*(int *)(iVar2 + 0x1c) + 4);
    if ((*(ushort *)(iVar5 + 0xbd) & 1) == 0) {
      iVar5 = FUN_00efd768();
    }
    *(int *)(*(int *)(iVar5 + 0x5c) + 4) = iVar4;
    iVar2 = *(int *)(*(int *)(iVar2 + 0x1c) + 4);
    if ((*(ushort *)(iVar2 + 0xbd) & 1) == 0) {
      iVar2 = FUN_00efd768();
    }
    thunk_FUN_00ec5080(*(int *)(iVar2 + 0x5c) + 4,iVar4);
  }
  if (*(int *)(**(int **)(_UNK_0151aaa8 + 0x151aa7c) + 0x74) == 0) {
    FUN_00ec3934();
  }
  pcVar6 = (char *)(_UNK_02c5c378 + 0x2c5c21c);
  if (*pcVar6 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_02c5c37c + 0x2c5c230),0);
    *pcVar6 = '\x01';
  }
  piVar7 = *(int **)(_UNK_02c5c380 + 0x2c5c244);
  if (*(int *)(*piVar7 + 0x74) == 0) {
    FUN_00ec3934();
  }
  pcVar6 = (char *)(_UNK_02c5c384 + 0x2c5c260);
  if (*pcVar6 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_02c5c388 + 0x2c5c274));
    *pcVar6 = '\x01';
  }
  iVar2 = *piVar7;
  if (*(int *)(iVar2 + 0x74) == 0) {
    FUN_00ec3934();
    iVar2 = *piVar7;
  }
  if (**(char **)(iVar2 + 0x5c) != '\0') {
    if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    (**(code **)(iVar4 + 0xc))(*(undefined4 *)(iVar4 + 0x20),*(undefined4 *)(iVar4 + 0x14));
  }
  return;
}


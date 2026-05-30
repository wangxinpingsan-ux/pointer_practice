#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int count = 0;
    printf("請問你要輸入幾個名字？ ");
    scanf("%d", &count);

   
    char **name_list = malloc(count * sizeof(char *));//char 挖count個放地址的 0x7000 0x8000

    


    if (name_list == NULL) {
        printf("error\n");
        return 1;
    }

    
    for (int i = 0; i < count; i++) {
        
        name_list[i] = malloc(50 * sizeof(char)); //挖放地址的 放入0x7000 0x8000
        
        printf("請輸入第 %d 個名字: ", i + 1);
        
        // ❓ 請問 scanf 這裡應該傳入什麼？
        // 提示：name_list[i] 本身就已經是那一串 50 格空間的第一個門牌地址了！
        // 而且字串輸入是用 %s 喔！
        scanf("%s", ________________); 
    }

    // 3. 印出所有名字
    printf("\n--- 名字清單 ---\n");
    for (int i = 0; i < count; i++) {
        // ❓ 請問 printf 這裡要怎麼印出第 i 個字串？
        printf("第 %d 個名字: %s\n", i + 1, ________________);
    }

    // 4. 🚀 負責任的退租（雙重釋放）
    // 必須先還小房間（每個名字的空間），才能還大樓（指標陣列本身）
    for (int i = 0; i < count; i++) {
        free(name_list[i]);
    }
    free(name_list);
    name_list = NULL;

    return 0;
}

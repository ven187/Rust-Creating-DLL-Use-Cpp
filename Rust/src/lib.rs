#[no_mangle]
pub extern "C" fn add(a: i32, b: i32) 
{
    println!("Sum result: {}", a + b);
}

#[no_mangle]
pub extern "C" fn subtract(a: i32, b: i32) -> i32 
{
    a - b
}
